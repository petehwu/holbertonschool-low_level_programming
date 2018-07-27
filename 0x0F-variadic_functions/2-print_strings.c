#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints out strings
 * @separator: string separator to use
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list slist;
	unsigned int i;
	char *val;

	va_start(slist, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(slist, char *);
		printf("%s", val ? val : "(nil)");
		if (i < n - 1)
			printf("%s", separator ? separator : "");
	}
	va_end(slist);
	printf("\n");
}
