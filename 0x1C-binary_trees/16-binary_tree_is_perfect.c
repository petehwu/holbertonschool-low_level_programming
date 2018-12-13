#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if the binary tree is perfect
 * @tree: root node of tree
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lb = 1, rb = 1;
	size_t lh, rh;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	lh = recurse_perfect_height(tree->left);
	rh = recurse_perfect_height(tree->right);
	if (lh == rh)
	{
		lb = recurse_binary_tree_is_perfect1(tree->left, lb);
		rb = recurse_binary_tree_is_perfect1(tree->right, rb);
		if (lb == 1 && rb == 1)
			return (1);
		else
			return (0);
	}
	else
		return (0);


}
/**
 * recurse_perfect_height - checks height for tree
 * @tree: node to start calculation
 * Return: height of tree or 0 if tree is null
 */
size_t recurse_perfect_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = recurse_perfect_height(tree->left) + 1;
	right = recurse_perfect_height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}
/**
 * recurse_binary_tree_is_perfect1 - checks for full tree
 * @tree: root of tree
 * @bal: tree is balanced
 * Return: 1 if tree is balanced otherwise 0
 */
int recurse_binary_tree_is_perfect1(const binary_tree_t *tree, int bal)
{
	if (!tree)
		return (0);
	if (tree->left && bal)
	{
		if (tree->right)
			bal = recurse_binary_tree_is_perfect1(tree->left, bal);
		else
			return (0);
	}
	if (tree->right && bal)
	{
		if (tree->left)
			bal = recurse_binary_tree_is_perfect1(tree->right, bal);
		else
			return (0);
	}
	return (bal);

}
