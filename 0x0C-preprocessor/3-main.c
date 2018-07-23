#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;
    int k;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    k = ABS(-1 * 5) * 10;
    printf("%d, %d, %d\n", i, j, k);
    return (0);
}
