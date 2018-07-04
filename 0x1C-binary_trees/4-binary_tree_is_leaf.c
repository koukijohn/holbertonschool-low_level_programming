#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: This is a pointer to node to check.
 *
 * Return: 1 if node is leaf, 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
