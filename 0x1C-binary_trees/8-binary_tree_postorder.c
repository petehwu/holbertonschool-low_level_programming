#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a binary tree post-order
 * @tree: pointer to root of tree
 * @func: pointer to function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
