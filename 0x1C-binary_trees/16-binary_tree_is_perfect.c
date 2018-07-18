#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in a binary tree.
 * @tree: Pointer to root node of tree to count number of leaves.
 *
 * Return: 0 or number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
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

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
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
 * binary_tree_is_perfect - Checks if binary tree if perfect.
 * @tree: Pointer to root node of tree to check.
 *
 * Return: 0 for false, 1 for True.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaves = 0, height = 0, leaf_level = 0, power = 1;

	if (tree == NULL)
	{
		return (0);
	}

	leaves = binary_tree_leaves(tree);
	height = binary_tree_height(tree);

	while (leaf_level < height)
	{
		power = 2 * power;
		leaf_level++;
	}
	if (leaves == power)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
