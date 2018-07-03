#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _atoi("98");
    printf("%d\n", n);
    n = _atoi("-402");
    printf("%d\n", n);
    n = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("0");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", n);
    n = _atoi("zxccv−2147483648zxcvxvc");
    printf("%d\n", n);
    n = _atoi("xxxxx");
    printf("%d\n", n);
    n = _atoi("000000");
    printf("%d\n", n);
    n = _atoi("99999999999999999");
    printf("%d\n", n);

    n = _atoi("−2147483649");
    printf("%d\n", n);
    n = _atoi("2147483649");
    printf("%d\n", n);
    return (0);
    return (0);
}
