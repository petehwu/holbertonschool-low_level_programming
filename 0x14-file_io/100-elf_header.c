#include "holberton.h"
/**
 * main - reads elf header
 * @argc: number of arguments
 * @argv: name of elf file
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd, i;
	char buffer[32];
	unsigned short typeval;
	int mem32, abi_val;
	long long int mem64;
	int bytes_read = 0;
	char elf[4] = {127, 69, 76, 70};
	char *abi[18] = {"System V", "HP-UX", "NetBSD", "Linux", "GNU Hurd", " ",
		"Solaris", "AIX", "IRIX", "FreeBSD", "Tru64", "Novell Modesto",
		"OpenBSD", "OpenVMS", "NonStop Kernel", "AROS", "Fenix OS", "CloudABI"};

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	bytes_read = read(fd, buffer, 32);
	if (bytes_read != 32)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF file\n");
		exit(98);
	}
	close(fd);
	for (i = 0; i < 4; i++)
	{
		if (elf[i] != buffer[i])
		{
			dprintf(STDERR_FILENO, "Error: Not ELF file\n");
			exit(98);
		}

	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x", buffer[i]);
		if (i < 15)
			printf(" ");
	}
	printf("\n");
	if (buffer[4] == 1)
		printf("  %-35sELF32\n", "Class:");
	else
		printf("  %-35sELF64\n", "Class:");
	if (buffer[5] == 1)
		printf("  %-35s2's complement, little endian\n", "Data:");
	else
		printf("  %-35s2's complement, big endian\n", "Data:");
	if (buffer[6] == 1)
		printf("  %-35s1 (current)\n", "Version:");
	else
		printf("  %-35s2 (unknown)\n", "Version:");
	if (buffer[7] == 5 || buffer[7] > 17)
	{
		printf("  %-35s<Unknown: %d>\n", "OS/ABI:", buffer[7]);
	}
	else
	{
		abi_val = buffer[7];
		printf("  %-35sUNIX - %s\n", "OS/ABI", (char *) abi[abi_val]);
	}
	printf("  %-35s%x\n", "ABI Version: ", buffer[8]);

	if (buffer[5] == 1)
	{
		/*  little endian */
		typeval = (buffer[17] << 8) + buffer[16];
	}
	else
	{
		typeval = (buffer[16] << 8) + buffer[17];
	}
	switch(typeval) 
	{
		case 0:
			printf("  %-35s%s\n", "Type:", "NONE (No file type");
			break;
		case 1:
			printf("  %-35s%s\n", "Type:", "REL (Relocatable file)");
			break;
		case 2:
			printf("  %-35s%s\n", "Type:", "EXEC (Executable file)");
			break;
		case 3:
			printf("  %-35s%s\n", "Type:", "DYN (Shared object file)");
			break;
		case 4:
			printf("  %-35s%s\n", "Type:", "CORE (Core file)");
			break;
		case 0xfe00:
			printf("  %-35s%s\n", "Type:", "LOOS (Operating system-specific)");
			break;
		case 0xfeff:
			printf("  %-35s%s\n", "Type:", "HIOS (Operation system-specific)");
			break;
		case 0xff00:
			printf("  %-35s%s\n", "Type:", "LOPROC (Processor-specific)");
			break;
		case 0xffff:
			printf("  %-35s%s\n", "Type:", "HIPROC (Processor-specific)");
			break;
			

	}
	if (buffer[4] == 1)
	{
		/* 32bit*/
		if (buffer[5] == 1)
		{
			/*little endian*/
			for (i = 27; i > 23; i--)
			{
				if (buffer[i] > 0)
					mem32 +=  buffer[i] << (8 * (i - 24));
			}
		}
		else
		{
			for (i = 24; i < 28; i++)
				mem32 += buffer[i] << (8 * (27 - i));
		}
		printf("  %-35s0x%x\n", "Entry point address:",  mem32);
	}
	else
	{
		/*64bit*/
		if (buffer[5] == 1)
		{
			for (i = 31; i > 23; i--)
			{
				if (buffer[i] > 0)
					mem64 += buffer[i] << (8 * (i - 24));
				else
					mem64 = mem64 >> 8;
			}
		}
		else
		{
			for (i = 24; i < 32; i++)
				mem64 += buffer[i] << (8 * (32 - i));
		}
		printf("  %-35s%p\n", "Entry point address:", (void *) mem64);
	}
	return (0);
}
