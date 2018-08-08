#ifndef __LISTS_H_
#define __LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct list_s - singly linked list
 * @curr: pointer to current node
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	const struct listint_s *curr;
	struct list_s *next;
} list_t;

/**
 * print_listint - prints all elements of integer list
 * @h: list of integers to print
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len - counts number of nodes in integer list
 * @h: list of inteers to count
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h);

/**
 * add_nodeint - adds a new node to head of list of integers
 * @head: pointer to pointer of head of node
 * @n: number to add to list
 * Return: list of integers with new node added
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - adds a new node to end of list of integers
 * @head: pointer to pointer of head of node
 * @n: number to add to end of list
 * Return: list of integers with new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - frees memory for list of integers
 * @head: pointer to head of list
 */
void free_listint(listint_t *head);

/**
 * free_listint2 - frees memory for list by setting head to null
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head);

/**
 * pop_listint - deletes fist element in list and return its contend
 * @head: pointer to pointer of head of list
 * Return: value stored in first node of list
 */
int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - returns nth node of list of integers
 * @head: pointer to head of list
 * @index: element to get
 * Return: listint_t object of nth element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - calculates sum of all elements in list of integers
 * @head: pointer to head of list
 * Return: sum of all elements in list
 */
int sum_listint(listint_t *head);

/**
 * insert_nodeint_at_index - inserts a node at nth position specified
 * @head: pointer to pointer of head of node
 * @idx: position to insert new value
 * @n: number to insert to list
 * Return: pointer to pointer of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/**
 * delete_nodeint_at_index - deletes a node at index given
 * @head: pointer to pointer of head of list
 * @index: element to delete
 * Return: 1 if deletion successful -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer to head of list
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head);

/**
 * print_listint_safe - prints a list even if it loops
 * @head: head of list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head);

/**
 * free_list - frees memory for list
 * @head: pointer to head of list
 */
void free_list(list_t *head);

/**
 * add_node - adds a new node to head of list
 * @head: pointer to pointer of head of node
 * @curr: pointer to current node
 * Return: list with new node added
 */
list_t *add_node(list_t **head, const listint_t *curr);

/**
 * find_node - looks through a list and see if address already exist
 * @head: head of list
 * @addr: address to look for in list
 * Return: 1 if found, 0 otherwise
 */
int find_node(const list_t *head, const listint_t *addr);


#endif
