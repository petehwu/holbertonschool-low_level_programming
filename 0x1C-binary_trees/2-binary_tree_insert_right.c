#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as right node
 * @parent: parent node
 * @value: value to be stored in new node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *oldright = NULL;

	if (!parent)
		return (NULL);
	oldright = parent->right;
	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);
	parent->right = newnode;
	if (oldright)
	{
		newnode->right = oldright;
		oldright->parent = newnode;
	}

	return (newnode);
}

