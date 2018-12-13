#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left node
 * @parent: parent node
 * @value: value to be stored in new node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *oldleft = NULL;

	if (!parent)
		return (NULL);
	oldleft = parent->left;
	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);
	parent->left = newnode;
	if (oldleft)
	{
		newnode->left = oldleft;
		oldleft->parent = newnode;
	}

	return (newnode);
}

