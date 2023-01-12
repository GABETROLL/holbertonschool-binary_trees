#include "binary_trees.h"

/**
 * binary_tree_sibling - Returns a node's sibling
 * if the node isn't NULL and it has a sibling.
 *
 * @node: node to find the sibling of
 *
 * Return: pointer to sibling of node 'node'
 * if 'node' isn't NULL and has a sibling,
 * otherwise, NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		binary_tree_t *left = node->parent->left;
		binary_tree_t *right = node->parent->right;

		if (left == node)
			return (right);
		return (left);
	}
	return (NULL);
}

