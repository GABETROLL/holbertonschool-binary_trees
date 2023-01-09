#include "binary_trees.h"

/**
 * binary_tree_size - Counts ALL children, from direct
 * child to leaf, of tree node 'tree', and returns that
 * count PLUS one, to count ITSELF.
 *
 * If 'tree' is NULL, just 0.
 *
 * @tree: root node of tree to count its nodes.
 *
 * Return: node count in tree 'tree', with 'tree'
 * node as root
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree)
	{
		/* self; left; right */
		result++;
		result += binary_tree_size(tree->left);
		result += binary_tree_size(tree->right);
	}

	return (result);
}

