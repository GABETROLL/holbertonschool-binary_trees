#include "binary_trees.h"
#include <stdio.h>

/**
 * print_tree - Prints the values in tree
 * using indentation
 * to display the depth of each value
 *
 * @tree: binary tree - if it's NULL,
 * function doesn't do anything
 * @tabs: number of tabs to display
 * value (please just do 0)
 *
 * Return: nothing
 */
void print_tree(binary_tree_t *tree, int tabs)
{
	int tab_count = 0;

	if (tree)
	{
		for (; tab_count < tabs; tab_count++)
			putchar('\t');
		printf("%d\n", tree->n);

		print_tree(tree->left, tabs + 1);
		print_tree(tree->right, tabs + 1);
	}
}

