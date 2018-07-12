#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    r = _sqrt_recursion(0);
    printf("%d\n", r);
    r = _sqrt_recursion(5);
    printf("%d\n", r);
    r = _sqrt_recursion(2);
    printf("%d\n", r);
    r = _sqrt_recursion(3);
    printf("%d\n", r);
    r = _sqrt_recursion(4);
    printf("%d\n", r);
    r = _sqrt_recursion(1048576);
    printf("%d\n", r);
    return (0);
}
