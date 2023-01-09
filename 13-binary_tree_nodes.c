#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts all NON-leaf nodes in tree
 * 'tree', treating the 'tree' node as the root.
 *
 * If tree is NULL or if tree has no children,
 * result is 0.
 *
 * (SO BASICALLY, THE OPPOSITE OF 'binary_tree_leaves')
 *
 * @tree: root node of tree to count nodes in
 *
 * Return: Count of all NON-leaf nodes in tree 'tree',
 * with the 'tree' node as root
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left || tree->right)
		{
			/* self */
			size_t result = 1;

			/* children */
			result += binary_tree_nodes(tree->left);
			result += binary_tree_nodes(tree->right);

			return (result);
		}
	}

	return (0);
}
