#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;
    char y[] = "Ee\n";
    char *z;
    char a[] = "blahAEOTLaeotlblah\n";
    char *b;
    char c[] = "x\n";
    char *d;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    z = leet(y);
    printf("%s", z);
    printf("%s", y);
    b = leet(a);
    printf("%s", b);
    printf("%s", a);
    d = leet(c);
    printf("%s", d);
    printf("%s", c);
    return (0);
}
