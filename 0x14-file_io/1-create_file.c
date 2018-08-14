#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: contents of the file to put in file
 * Return: 1 if creation successful -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t written = 0, buffsize = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (*(text_content + buffsize))
			buffsize++;
		buffsize++;
		written = write(fd, text_content, buffsize);
		if (written != buffsize)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);
	return (1);
}
