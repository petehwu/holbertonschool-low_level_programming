#ifndef __HOLBERTON_H_
#define __HOLBERTON_H_

#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to read
 * @letters: number of characters to read and print
 * Return: number of characters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: contents of the file to put in file
 * Return: 1 if creation successful -1 otherwise
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append text to
 * @text_content: content to paste
 * Return: 1 if successful or -1 if not
 */
int append_text_to_file(const char *filename, char *text_content);


#endif
