#include "binary_trees.h"

/**
 * binary_tree_depth - Finds how deep from the root node
 * a tree node 'tree' is.
 *
 * If 'tree' is NULL or if 'tree' has no parent,
 * you just get 0.
 *
 * @tree: node to find its depth in a binary tree
 *
 * Return: depth in tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
