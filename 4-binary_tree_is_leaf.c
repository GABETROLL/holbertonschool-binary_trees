#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * (aka: the node is at the BOTTOM of the tree)
 *
 * @node: node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*
	 * if the node isn't NULL and both the node's
	 * left and right child are NULL,
	 * then we must be at the bottom and
	 * we can return 1, otherwise, 0
	 */
	return (node && !(node->left || node->right)) ? 1 : 0;
}
