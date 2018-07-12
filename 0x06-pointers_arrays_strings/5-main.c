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
    char *f = "";
    char *t;

    t = _strstr(s, f);
    if (t == 0)
	printf("Returned 0\n");
    else
        printf("%s", t);
    return (0);
}
