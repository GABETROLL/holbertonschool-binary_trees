#include "binary_trees.h"

/**
 * binary_tree_postorder - Visits every node in
 * the 'tree' node parameter, treating the
 * node as a root, and calls '(*func)(current_node->n)'
 * in a post-order fashion.
 *
 * @tree: tree to go through nodes in
 * If it's NULL, the function just exits immediatly.
 *
 * @func: function to use when visiting each node
 * If it's NULL, the function just exits immediatly.
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

