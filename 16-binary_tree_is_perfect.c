#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Returns true if every node
 * the tree 'tree' is perfect (aka: every tree in the
 * node has 2 or 0 children, and all leaves have the
 * same depth)
 *
 * Assuming the 'tree' node is the root.
 *
 * If 'tree' is NULL, this function returns 0.
 *
 * @tree: tree
 *
 * Return: Read above
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		/*
		 * if the 'tree' node is a leaf,
		 * all nodes in the tree have 0
		 * children, and the root node is
		 * the only leaf, so all leaves in
		 * it are in the same level. there-
		 * fore, it's a perfect tree!
		 */
		if (!tree->left && !tree->right)
			return (1);
		/*
		 * if the 'tree' node has two children,
		 * the condition hasn't been broken yet.
		 *
		 * If both children are perfect trees,
		 * then this node is also a perfect tree.
		 */
		if (tree->left && tree->right)
		{
			size_t left_child_height = binary_tree_height(tree->left);
			size_t right_child_height = binary_tree_height(tree->right);
			int left_child_is_perfect = binary_tree_is_perfect(tree->left);
			int right_child_is_perfect = binary_tree_is_perfect(tree->right);

			return (left_child_is_perfect && right_child_is_perfect
					&& left_child_height == right_child_height);
		}
	}
	/* condition broken or 'tree' is NULL */
	return (0);
}
