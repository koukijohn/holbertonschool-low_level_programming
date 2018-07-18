#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full.
 * @tree: Pointer to root node of tree to check.
 *
 * Return: 0 for False, 1 for True.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}
	return (0);
}
