#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses a binary tree in-order
 * @tree: pointer to root of tree
 * @func: pointer to function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
		{
			binary_tree_inorder(tree->left, func);
			func(tree->n);
		}
		else
			func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
