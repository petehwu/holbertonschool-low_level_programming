#include "binary_trees.h"
/**
 * binary_tree_balance - finds the balance of binary tree
 * @tree: root of tree
 * Return: balance value or 0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = recurse_tree_balance(tree->left);
	right_height = recurse_tree_balance(tree->right);
	return ((int) (left_height - right_height));
}
/**
 * recurse_tree_balance - recursive function to traverse tree and find height
 * @tree: node to start
 * Return: number of levels
 */
size_t recurse_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = recurse_tree_balance(tree->left) + 1;
	right = recurse_tree_balance(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);

}

