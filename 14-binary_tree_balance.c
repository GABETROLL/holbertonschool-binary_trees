#include "binary_trees.h"

/* from exercise 9: */
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Assumes the 'tree' node
 * is the root node, and returns its balance factor.
 *
 * If 'tree' is NULL, just 0
 *
 * @tree: root node
 *
 * Return: balance factor of 'tree'
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

