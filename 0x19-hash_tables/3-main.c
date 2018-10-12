#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht = NULL;

    ht = hash_table_create(1024);
    printf("1: %d\n", hash_table_set(ht, "betty", "holberton")); 
    printf("0: %d\n", hash_table_set(ht, "", "holberton"));
    printf("0: %d\n", hash_table_set(ht, NULL, "holberton"));
    printf("1: %d\n", hash_table_set(ht, "some", ""));  
    printf("1: %d\n", hash_table_set(ht, "hi", "there"));  
    printf("1: %d\n", hash_table_set(ht, "wu", "peter"));  
    printf("0: %d\n", hash_table_set(NULL, "some", "a"));
    return (EXIT_SUCCESS);
}
