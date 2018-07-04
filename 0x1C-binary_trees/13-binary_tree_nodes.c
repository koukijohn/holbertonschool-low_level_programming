#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: This is a pointer to root node to count # of nodes.
 *
 *
 * Return: 0 or number of nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_subtree;
	size_t right_subtree;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	left_subtree = binary_tree_nodes(tree->left);
	right_subtree = binary_tree_nodes(tree->right);
	return (left_subtree + right_subtree + 1);
}
