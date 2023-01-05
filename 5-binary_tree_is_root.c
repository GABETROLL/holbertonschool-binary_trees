#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the
 * root of its tree
 * (aka: the node has no parent
 *
 * @node: node to check
 *
 * Return: 1 if node is the root of its tree,
 * otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
