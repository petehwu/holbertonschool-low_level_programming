#include <stdio.h>
/**
 * main - prints all arguments it reecives
 * @argc: number of arguments passed
 * @argv: pointer to first argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n",*(argv + i));
	return (0); 
}
