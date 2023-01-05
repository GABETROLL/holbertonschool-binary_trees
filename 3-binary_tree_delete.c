#include "binary_trees.h"

/**
 * binary_tree_delete - Frees all nodes
 * of the tree in the heap
 *
 * @tree: tree to free
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

