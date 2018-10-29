#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);
    int array1[] = {19};
    size_t n1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {58, 20};
    size_t n2 = sizeof(array2) / sizeof(array2[0]);
    int array3[] = {19, 48, 3};
    size_t n3 = sizeof(array3) / sizeof(array3[0]);

    print_array(array, n);
    printf("==\n");
    quick_sort(array, n);
    printf("==\n");
    print_array(array, n);
    printf("************\n");

    print_array(array1, n1);
    printf("==\n");
    quick_sort(array1, n1);
    printf("==\n");
    print_array(array1, n1);

    printf("************\n");
    print_array(array2, n2);
    printf("==\n");
    quick_sort(array2, n2);
    printf("==\n");
    print_array(array2, n2);

    printf("************\n");
    print_array(array3, n3);
    printf("==\n");
    quick_sort(array3, n3);
    printf("==\n");
    print_array(array3, n3);

    return (0);
}
