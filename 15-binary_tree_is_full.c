#include "binary_trees.h"

/**
 * binary_tree_is_full - Returns true if every node
 * in the 'tree' tree has 2 or 0 children,
 * assuming the 'tree' node is the root.
 *
 * If 'tree' is NULL, this function returns 0.
 *
 * @tree: tree
 *
 * Return: Read above
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		/* if the 'tree' node is a leaf */
		if (!tree->left && !tree->right)
			return (1);
		/*
		 * if the 'tree' node has two children,
		 * the condition hasn't been broken yet.
		 */
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	/* condition broken or 'tree' is NULL */
	return (0);
}
