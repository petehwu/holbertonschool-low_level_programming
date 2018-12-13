#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in binary tree
 * @tree: node to start measuring
 * Return: depth or 0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp_tree = tree;

	while (temp_tree->parent)
	{
		depth++;
		temp_tree = temp_tree->parent;
	}
	return (depth);
}
