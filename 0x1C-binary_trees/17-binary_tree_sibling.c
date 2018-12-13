#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibling of node
 * @node: node to find sibling for
 * Return: pointer to sibling or NULL if no sibling found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent ||
			!node->parent->left || !node->parent->right)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);

}
