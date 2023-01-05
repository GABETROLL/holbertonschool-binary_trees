#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new
 * childless binary tree node with
 * its parameters as the new node's
 * attributes
 *
 * Unless malloc fails, then it
 * returns NULL.
 *
 * @parent: parent of the resulting node
 * @value: value of the resulting node
 *
 * Return: new node if enough memory,
 * NULL otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (!result)
		return (NULL);

	result->n = value;
	result->parent = parent;
	result->left = NULL;
	result->right = NULL;

	return (result);
}

