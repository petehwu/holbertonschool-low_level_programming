#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed in
 */
void print_all(const char * const format, ...)
{
	va_list parmlist;
	int i = 0;
	char cn;

	va_start(parmlist, format);
	while (*(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", (char) va_arg(parmlist, int));
				break;
			case 'i':
				printf("%i", va_arg(parmlist, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(parmlist, double));
				break;
			case 's':
				printf("%s", va_arg(parmlist, char *));
		}
		cn = *(format + i + 1);
		if (cn && (cn == 'c' || cn == 'i' || cn == 'f' || cn == 's'))
			printf(", ");
		i++;
	}
	va_end(parmlist);
	printf("\n");
}
