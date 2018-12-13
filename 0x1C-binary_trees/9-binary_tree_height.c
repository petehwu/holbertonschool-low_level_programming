#include "binary_trees.h"
/**
 * binary_tree_height - calculates height of binary tree from node
 * @tree: node to start calculation
 * Return: height of tree or 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left  = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}
