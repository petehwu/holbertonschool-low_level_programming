#include "binary_trees.h"
/**
 * binary_tree_is_full - checks the binary tree to see if its full
 * @tree: root of tree
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int bal = 1;

	if (!tree)
		return (0);
	return (recurse_binary_tree_is_full(tree, bal));
}
/**
 * recurse_binary_tree_is_full - add or subtract from total to get
 * left vs right nodes
 * @tree: root of binary tree
 * @bal: running total of number of left vs right nodes
 * Return: number of left nodes minues number of right nodes
 */
int recurse_binary_tree_is_full(const binary_tree_t *tree, int bal)
{
	if (tree->left && bal)
	{
		if (tree->right)
			bal = recurse_binary_tree_is_full(tree->left, bal);
		else
			return (0);
	}
	if (tree->right && bal)
	{
		if (tree->left)
			bal = recurse_binary_tree_is_full(tree->right, bal);
		else
			return (0);
	}
	return (bal);
}
