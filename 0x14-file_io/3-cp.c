#include "holberton.h"
/**
 * main - copies files
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int ofd, nfd;
	int bytes_read = 0, bytes_written = 0;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ofd = open(argv[1], O_RDONLY);
	if (ofd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	nfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (nfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(ofd);	
		exit(99);
	}
	do
	{
		bytes_read = read(ofd, buff, BUFF_SIZE);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(ofd);
			close(nfd);
			exit(98);
		}
		bytes_written = write(nfd, buff, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(ofd);
			close(nfd);
			exit(99);
		}

	}
	while (bytes_read > 0);
	if (close(ofd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofd);
		exit(100);
	}
	if (close(nfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", nfd);
		exit(100);
	}
	return(0);

}
