#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to read
 * @letters: number of characters to read and print
 * Return: number of characters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, act_read, act_write;
	char *buffer;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
		buffer = malloc(letters * sizeof(char));
		if (!buffer)
		{
			return (0);
		}
		act_read = read(fd, buffer, letters);
		if (act_read == -1)
			return (0);
		act_write = write(STDOUT_FILENO, buffer, act_read);
		free(buffer);
		if (act_write != act_read)
			return (0);
		return (act_write);
	}
	return (0);
}

