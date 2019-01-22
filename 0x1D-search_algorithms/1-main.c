#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    int array2[] = {
	    1, 2, 5, 7, 9, 10, 34, 38, 40, 43, 45, 60, 80, 100, 135, 500, 551, 553, 600, 670
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    size_t size2 = sizeof(array2) / sizeof(array2[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n\n", 999, binary_search(array, size, 999));
    printf("Found %d at index: %d\n\n", 9, binary_search(array, size, 9));

    
    printf("Found %d at index: %d\n\n", 2, binary_search(array2, size2, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array2, 13, 5));
    printf("Found %d at index: %d\n\n", 999, binary_search(array2, size2, 999));
/*
    printf("Found %d at index: %d\n\n", -9, binary_search(array2, size2, -9));
*/    
    printf("Found %d at index: %d\n\n", 600, binary_search(array2, size2, 600));
    printf("Found %d at index: %d\n\n", 1, binary_search(array2, size2, 1));
    printf("Found %d at index: %d\n\n", 670, binary_search(array2, size2, 670));
    printf("Found %d at index: %d\n\n", 670, binary_search(NULL, 0, 670));
    printf("Found %d at index: %d\n\n", -9, binary_search(array2, size2, -9));
    printf("Found %d at index: %d\n\n", 0, binary_search(array2, size2, 0));
    return (EXIT_SUCCESS);
}
