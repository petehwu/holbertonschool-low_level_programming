#include "binary_trees.h"
/**
 * binary_tree_nodes - counts number of nodes with child in binary tree
 * @tree: root of tree to start counting
 * Return: number of nodes or 0 if tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive_nodes(tree, 0));
}
/**
 * recursive_nodes - counts number of nodes recursively
 * @tree: root of tree to start counting
 * @nodes: number of nodes
 * Return: number of nodes
 */
size_t recursive_nodes(const binary_tree_t *tree, size_t nodes)
{
	if (tree->left)
		nodes = recursive_nodes(tree->left, nodes);
	if (tree->right)
		nodes = recursive_nodes(tree->right, nodes);
	if (tree->left || tree->right)
		nodes++;
	return (nodes);
}
