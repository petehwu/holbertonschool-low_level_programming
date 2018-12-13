#include "binary_trees.h"
/**
 * binary_tree_is_root - checks to see if node is the root node
 * @node: node to check
 * Return: 1 if node, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	else
		return (0);
}
