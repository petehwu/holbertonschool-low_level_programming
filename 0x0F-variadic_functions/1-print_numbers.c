#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints out all the numbers in the list
 * @separator: separator value to use
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;

	va_start(numlist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numlist, int));
		if (i < n - 1)
			printf("%c ", separator ? *separator : 0);
	}
	printf("\n");

}
