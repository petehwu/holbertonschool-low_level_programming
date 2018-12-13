#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if the binary tree is perfect
 * @tree: root node of tree
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t num_nodes = 0, levels = 0, i, val = 2;

	if (!tree)
		return (0);
	num_nodes = count_nodes(tree, 1);
	levels = get_levels(tree);
	for (i = 0; i < levels; i++)
		val *= 2;
	val--;
	if (num_nodes == val)
		return (1);
	else
		return (0);

}
/**
 * count_nodes - counts total number of nodes in tree
 * @tree: nodes to start counting
 * @nodes: number of nodes counted
 * Return : number of nodes
 */
size_t count_nodes(const binary_tree_t *tree, size_t nodes)
{
	if (tree->left)
		nodes = count_nodes(tree->left, nodes + 1);
	if (tree->right)
		nodes = count_nodes(tree->right, nodes + 1);
	return (nodes);
}
/**
 * get_levels - gets level for tree
 * @tree: root of tree
 * Return: height of tree
 */
size_t get_levels(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = get_levels(tree->left) + 1;
	right = get_levels(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}
