#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Holberton";
    char t[] = "Ho";
    char u[] = "abcdefghijklmnopqrstuvwxyz";
    char i[] = "hot";
    char z[] = "z";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);

    printf("%s\n", t);
    rev_string(t);
    printf("%s\n", t);

    printf("%s\n", u);
    rev_string(u);
    printf("%s\n", u);

    printf("%s\n", i);
    rev_string(i);
    printf("%s\n", i);

    printf("%s\n", z);
    rev_string(z);
    printf("%s\n", z);




    return (0);
}
