#include "binary_trees.h"

/**
 * binary_tree_insert_left - Makes new node
 * with 'value' as its 'n' attribute and
 * inserts it as the child of the 'parent' node.
 *
 * If 'parent' is NULL or creating the new
 * node with 'malloc' fails, it just returns
 * NULL.
 *
 * If the parent already has a left child,
 * the new node BECOMES the parent's left child
 * and the parent's old left child becomes the
 * new node's left child
 * (and therefore, the old left child's parent
 * will be the new node)
 *
 * Finally, the new node's right child will
 * be NULL.
 *
 * @parent: it's left child will be the new node
 * @value: 'n' value of the new node
 *
 * Return: pointer to new created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (!parent || !result)
		return (NULL);

	result->n = value;
	result->parent = parent;
	result->left = parent->left;
	result->right = NULL;

	if (parent->left)
		parent->left->parent = result;

	parent->left = result;

	return (result);
}

