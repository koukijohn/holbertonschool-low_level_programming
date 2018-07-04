#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in a binary tree.
 * @tree: Pointer to root node of tree to count number of leaves.
 *
 * Return: 0 or number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number_of_leaves;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));

	}
}
