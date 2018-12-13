#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node for binary tree
 * @parent: parent of the node to be created
 * @value: value to be stored in new node
 * Return: the new node if created successfully otherwise NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
