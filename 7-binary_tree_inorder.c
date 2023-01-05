#include "binary_trees.h"

/**
 * binary_tree_inorder - Visits every node in
 * the 'tree' node parameter, treating the
 * node as a root, and calls '(*func)(current_node->n)'
 *
 * @tree: tree to go through nodes in
 * If it's NULL, the function just exits immediatly.
 *
 * @func: function to use when visiting each node
 * If it's NULL, the function just exits immediatly.
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

