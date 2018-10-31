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
    int array1[] = {19, 48, 99};
    size_t n1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {19, 48};
    size_t n2 = sizeof(array2) / sizeof(array2[0]);
    int array3[] = {19, 48, 56, 89, 90};
    size_t n3 = sizeof(array3) / sizeof(array3[0]);
    int array4[] = {19,  56, 89, 90};
    size_t n4 = sizeof(array4) / sizeof(array4[0]);

    print_array(array, n);
    printf("\n");
    shell_sort(array, n);
    printf("\n");
    print_array(array, n);

    printf("---\n");
    print_array(array1, n1);
    printf("\n");
    shell_sort(array1, n1);
    printf("\n");
    print_array(array1, n1);

printf("---\n");
    print_array(array2, n2);
    printf("\n");
    shell_sort(array2, n2);
    printf("\n");
    print_array(array2, n2);
    
printf("---\n");
    print_array(array3, n3);
    printf("\n");
    shell_sort(array3, n3);
    printf("\n");
    print_array(array3, n3);
    
printf("---\n");
    print_array(array4, n4);
    printf("\n");
    shell_sort(array4, n4);
    printf("\n");
    print_array(array4, n4);
    return (0);
}
