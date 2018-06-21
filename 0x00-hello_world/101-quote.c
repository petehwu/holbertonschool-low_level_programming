#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main -  write to stderr
 * Return: 1
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n;

	write(2, str1, strlen(str1));
	return (1);
}
