#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";
    char s3[] = "Hello";
    char s4[] = "Hello!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
   
    printf("%d\n", _strcmp(s3, s4));
    printf("%d\n", _strcmp(s4, s3));
    printf("%d\n", _strcmp(s3, s3));
    return (0);
}
