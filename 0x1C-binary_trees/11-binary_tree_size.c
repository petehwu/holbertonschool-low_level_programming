#include "binary_trees.h"
/**
 * binary_tree_size - calculates size of tree
 * @tree: node to start calculations
 * Return: size of tree of 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recurse_tree_size(tree, 1));
}
/**
 * recurse_tree_size - recursively calculate size of tree
 * @tree: node to start calculations
 * @size: size of tree
 * Return: size of tree
 */
size_t recurse_tree_size(const binary_tree_t *tree, size_t size)
{
	if (tree->left)
		size = recurse_tree_size(tree->left, size + 1);
	if (tree->right)
		size = recurse_tree_size(tree->right, size + 1);
	return (size);
}
