#include "binary_trees.h"

/**
 * binary_tree_height - Finds the height of the
 * node 'tree' (aka how far away is the farthest
 * leaf child of 'tree')
 *
 * @tree: tree
 *
 * Return: the max height of the node 'tree' if 'tree'
 * is available, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
	{
		size_t left_child_height = binary_tree_height(tree->left);
		size_t right_child_height = binary_tree_height(tree->right);

		size_t result;

		if (left_child_height > right_child_height)
			result = left_child_height;
		result = right_child_height;

		return (result + 1);
	}

	return (0);
}
