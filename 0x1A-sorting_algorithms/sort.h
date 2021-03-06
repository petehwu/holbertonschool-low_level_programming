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

/**
 * insertion_sort_swapper - swap nodes in lined list
 * @list: pointer to pointer of list with nodes to be swapped
 * @from: node to swap from
 * @to: node to swap to
 */
void insertion_sort_swapper(listint_t **list, listint_t *from, listint_t *to);

/**
 * shell_sort - implementation of shell sort algorithm
 * @array:  array of integers to be sorted
 * @size: number of elements in @array
 */
void shell_sort(int *array, size_t size);

/**
 * shell_insertion_sort - perform insert sort
 * @array: array to sort
 * @size: number of elements in array
 * @start: start index
 * @gap: gap value
 */
void shell_insertion_sort(int *array, size_t size, size_t start, size_t gap);

/**
 * calc_pow  - calculates a value to the power
 * @val: value to use
 * @pow: raise to the power
 * Return: the value
 */
size_t calc_pow(size_t val, size_t pow);

/**
 * counting_sort - implements counting sort
 * @array: array of integers >= 0 to sort
 * @size: number of elements in @array
 */
void counting_sort(int *array, size_t size);

/**
 * make_int_array - creates an integer arry of the specified size and init
 * @size: size of array
 * Return: newly created array of null if fails
 */
int *make_int_array(size_t size);

#endif
