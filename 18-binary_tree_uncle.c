#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of node 'node'
 * if 'node' isn't NULL and node has a father (and
 * a grandfather) and an uncle.
 *
 * @node: node to find the uncle of
 *
 * Return: pointer to uncle of 'node' if 'node'
 * isn't NULL and has an uncle, otherwise, NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	if (node->parent->parent)
	{
		binary_tree_t *left = node->parent->parent->left;
		binary_tree_t *right = node->parent->parent->right;

		/*
		 * return the node's parent's parent's child
		 * that's not the node's parent.
		 */
		if (left == node->parent)
			return (right);
		return (left);
	}
}

