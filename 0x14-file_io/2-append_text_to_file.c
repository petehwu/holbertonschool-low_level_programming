#include "holberton.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append text to
 * @text_content: content to paste
 * Return: 1 if successful or -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int buff_size = 0, act_wrote = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd)
		return (-1);
	if (text_content)
	{
		while (*(text_content + buff_size))
			buff_size++;
		act_wrote = write(fd, text_content, buff_size);
	}
	if (act_wrote != buff_size)
		return (-1);
	close(fd);
	return (1);
}

