#include "binary_trees.h"

/**
 * binary_tree_height - Finds the height of the
 * node 'tree' (aka how far away is the farthest
 * leaf child of 'tree')
 *
 * THIS WAS COPIED FROM EXERCISE 9 TO PASS HOLBERTON'S
 * COMPILATION PROCESS
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
		else
			result = right_child_height;

		return (result + 1);
	}

	return (0);
}

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

