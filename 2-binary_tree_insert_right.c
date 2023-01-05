#include "binary_trees.h"

/**
 * binary_tree_insert_right - --I copied
 * this from file 1--
 *
 * Makes new node
 * with 'value' as its 'n' attribute and
 * inserts it as the right child of the 'parent'
 * node.
 *
 * If 'parent' is NULL or creating the new
 * node with 'malloc' fails, it just returns
 * NULL.
 *
 * If the parent already has a right child,
 * the new node BECOMES the parent's right child
 * and the parent's old right child becomes the
 * new node's right child
 * (and therefore, the old right child's parent
 * will be the new node)
 *
 * Finally, the new node's left child will
 * be NULL.
 *
 * @parent: it's right child will be the new node
 * @value: 'n' value of the new node
 *
 * Return: pointer to new created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	if (!parent)
		return (NULL);

	result = malloc(sizeof(binary_tree_t));

	if (!result)
		return (NULL);

	result->n = value;
	result->parent = parent;
	result->left = NULL;
	result->right = parent->right;

	if (parent->right)
		parent->right->parent = result;

	parent->right = result;

	return (result);
}

