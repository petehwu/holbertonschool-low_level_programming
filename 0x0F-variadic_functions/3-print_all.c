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
	int printflag = 0;
	char cn;
	char *sp;

	if (format)
	{
		va_start(parmlist, format);
		while (*(format + i))
		{
			switch (*(format + i))
			{
				case 'c':
					printf("%c", (char) va_arg(parmlist, int));
					printflag = 1;
					break;
				case 'i':
					printf("%i", va_arg(parmlist, int));
					printflag = 1;
					break;
				case 'f':
					printf("%f", (float) va_arg(parmlist, double));
					printflag = 1;
					break;
				case 's':
					sp = va_arg(parmlist, char *);
					printflag = 1;
					switch ((int) !sp)
					{
						case 0:
							printf("%s", sp);
							break;
						default:
							printf("(nil)");
					}
			}
			cn = *(format + i + 1);
			if (cn &&
					printflag == 1 &&
					(cn == 'c' || cn == 'i' || cn == 'f' || cn == 's'))
			{
				printf(", ");
				printflag = 0;
			}
			i++;
		}
		va_end(parmlist);
	}
	printf("\n");
}
