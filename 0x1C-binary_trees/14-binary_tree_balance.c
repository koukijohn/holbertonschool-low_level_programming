#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to root node of tree to measure height.
 *
 * Return: Height of binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree;
	size_t right_subtree;

	if (tree == NULL)
	{
		return (0);
	}

	left_subtree = binary_tree_height(tree->left);
	right_subtree = binary_tree_height(tree->right);

	if (left_subtree > right_subtree)
	{
		return (left_subtree + 1);
	}
	else
	{
		return (right_subtree + 1);
	}
}

/**
 * binary_tree_balance - Measures balance factor of binary tree.
 * @tree: Pointer to root node of tree to measure balance factor.
 *
 * Return: 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_subtree;
	int right_subtree;

	if (tree == NULL)
	{
		return (0);
	}
	left_subtree = binary_tree_height(tree->left);
	right_subtree = binary_tree_height(tree->right);
	return (left_subtree - right_subtree);
	/* balance factor is height(left_subtree) - height(right_subtree)*/
}
