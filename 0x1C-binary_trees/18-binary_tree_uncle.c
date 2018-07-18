#include "binary_trees.h"

/**
 * *binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to node to find uncle.
 *
 * Return: 0 or pointer to uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent == NULL)
	{
		return (NULL);
	}
	grandparent = node->parent->parent;
	if (grandparent == NULL)
	{
		return (NULL);
	}

	if (grandparent->left == parent)
	{
		return (grandparent->right);
	}
	else
	{
		return (grandparent->left);
	}
}
