#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list, *list1, *list2, *list3;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);
    int array1[] = {2};
    size_t n1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {2, 3};
    size_t n2 = sizeof(array2) / sizeof(array2[0]);
    int array3[] = {3, 2};
    size_t n3 = sizeof(array3) / sizeof(array3[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);


    list1 = create_listint(array1, n1);
    if (!list1)
        return (1);
    print_list(list1);
    printf("--\n");
    insertion_sort_list(&list1);
    printf("--\n");
    print_list(list1);


    list2 = create_listint(array2, n2);
    if (!list2)
        return (1);
    print_list(list2);
    printf("--\n");
    insertion_sort_list(&list2);
    printf("--\n");
    print_list(list2);


    list3 = create_listint(array3, n3);
    if (!list3)
        return (1);
    print_list(list3);
    printf("--\n");
    insertion_sort_list(&list3);
    printf("--\n");
    print_list(list3);
    
    return (0);
}
