#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds lowest common ancestor
 * @first: first node to look
 * @second: second node to look
 * Return: common ancestor or NULL if no common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int fd = 0, sd = 0, diff, i;
	binary_tree_t *fn = (binary_tree_t *) first, *sn = (binary_tree_t *) second;

	if (!fn || !sn)
		return (NULL);
	while (fn->parent)
	{
		fd++;
		fn = fn->parent;
	}
	while (sn->parent)
	{
		sd++;
		sn = sn->parent;
	}
	fn =  (binary_tree_t *) first;
	sn =  (binary_tree_t *) second;
	if (fd > sd)
	{
		diff = fd - sd;
		for (i = 0; i < diff; i++)
			fn = fn->parent;

	}
	else if (sd > fd)
	{
		diff = sd - fd;
		for (i = 0; i < diff; i++)
			sn = sn->parent;
	}
	while (fn && sn && fn != sn)
	{
		fn = fn->parent;
		sn = sn->parent;
	}
	return (fn);
}
