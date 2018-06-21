#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main -  write to stderr
 * Return: 1
 */
int main(void)
{
	char str1[] = "and that piece of art is useful";
	char str3[] = "\"";
	char str2[] = " - Dora Korpar, 2015-10-19\n";

	write(2, str1, strlen(str1));
	write(0, str3, 1);
	write(2, str2, strlen(str2));
	return (1);
}
