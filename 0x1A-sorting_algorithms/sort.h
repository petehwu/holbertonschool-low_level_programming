#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

/**
 * bubble_sort - performs bubble sort of an array
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size);

/**
 * insertion_sort - performs an insertion sort
 * @list: pointer to pointer of linked list to insert node
 */
void insertion_sort_list(listint_t **list);

/**
 * selection_sort - performs a selection sort
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size);

/**
 * quick_sort - function to perform quick sort of an array of integers
 * @array: array to sort
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size);

/**
 * qs - recursive function for quick sort
 * @array: array to sort
 * @start: starting search position in array
 * @end: end position for array
 * @size: number of total elements in @array
 */
void qs(int *array, size_t start, size_t end, size_t size);

/**
 * part - function to move all smaller digit to the left of pivot
 * @array: array to sort
 * @start: starting search position in array
 * @end: end position for array
 * @size: number of total elements in @array
 * Return: index position for splitting array
 */
size_t part(int *array, size_t start, size_t end, size_t size);

/**
 * swapper - swaps values in an array and print result
 * @array: array to swap in
 * @from: indext positon to swap from
 * @to: inex position to swap to
 * @size: number of total element in @array
 */
void swapper(int *array, size_t from, size_t to, size_t size);

#endif
