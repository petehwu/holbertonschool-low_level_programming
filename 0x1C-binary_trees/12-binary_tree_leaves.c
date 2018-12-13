#include "binary_trees.h"
/**
 * binary_tree_leaves - count number of leaves in binary tree
 * @tree: root of tree
 * Return: number of leaves or 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive_tree_leaves(tree, 0));
}
/**
 * recursive_tree_leaves - recursively count number of leaves
 * @tree: root of tree
 * @leaves: number of leaves
 * Return: number of leaves
 */
size_t recursive_tree_leaves(const binary_tree_t *tree, size_t leaves)
{
	if (tree->left)
		leaves = recursive_tree_leaves(tree->left, leaves);
	if (tree->right)
		leaves = recursive_tree_leaves(tree->right, leaves);
	if (!tree->left && !tree->right)
		leaves++;
	return (leaves);
}
