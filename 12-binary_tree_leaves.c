#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts all leave nodes in
 * tree 'tree', where the 'tree' node is treated as
 * the root. (Even itself, if it's the only node in its
 * tree)
 *
 * If 'tree' is NULL, this function returns 0.
 * If 'tree' has no children, this function returns 1
 * (itself).
 *
 * @tree: root node in tree to count all the leaves in
 *
 * Return: amount of leaf nodes in tree 'tree'
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t result = 0;

		if (tree->left)
			result += binary_tree_leaves(tree->left);
		if (tree->right)
			result += binary_tree_leaves(tree->right);

		if (result == 0)
			return (1);
		return (result);
	}
	return (0);
}

