#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    char *g = "o";
    char *p = "hello, world";
    char *x = "ho";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    n = _strspn(s, g);
    printf("%u\n", n);
    n = _strspn(s, p);
    printf("%u\n", n);
    n = _strspn(s, x);
    printf("%u\n", n);
    return (0);
}
