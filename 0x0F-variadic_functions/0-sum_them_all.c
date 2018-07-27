#include <stdarg.h>
/**
 * sum_them_all - sums all values in list
 * @n: number of parameters in list
 * Return: sum of values
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list plist;
	unsigned int i; 
	int sum = 0;

	va_start(plist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(plist, int);
	va_end(plist);
	return (sum);
}
