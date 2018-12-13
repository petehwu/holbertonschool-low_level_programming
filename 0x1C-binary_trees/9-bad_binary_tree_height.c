#include "binary_trees.h"
/**
 * binary_tree_height - calculates height of binary tree from node
 * @tree: node to start calculation
 * Return: height of tree or 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 1, right = 1;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left  =  traverse_tree(tree->left, left);
	right = traverse_tree(tree->right, right);
	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * traverse_tree - recursive function to traverse tree and find height
 * @tree: node to start
 * @height: number of levels traveled
 * Return: number of levels
 */
size_t traverse_tree(const binary_tree_t *tree, size_t height)
{
	if (!tree)
		return (0);
	if (tree->left)
	{
		height = traverse_tree(tree->left, height + 1);
	}
	if (tree->right)
	{
		if (tree->left)
			height = traverse_tree(tree->right, height);
		else
			height = traverse_tree(tree->right, height + 1);
	}
	return (height);
}
