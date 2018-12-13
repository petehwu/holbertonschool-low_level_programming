#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses a binary tree pre-order
 * @tree: pointer to root of tree
 * @func: pointer to function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
