#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int c[] = {0};
    int d[] = {1, 2};
    
    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    
    print_array(b, sizeof(b) / sizeof(int));
    reverse_array(b, sizeof(b) / sizeof(int));
    print_array(b, sizeof(b) / sizeof(int));
    
    print_array(c, sizeof(c) / sizeof(int));
    reverse_array(c, sizeof(c) / sizeof(int));
    print_array(c, sizeof(c) / sizeof(int));
    
    print_array(d, sizeof(d) / sizeof(int));
    reverse_array(d, sizeof(d) / sizeof(int));
    print_array(d, sizeof(d) / sizeof(int));
    return (0);
}
