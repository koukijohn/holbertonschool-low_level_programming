#include "binary_trees.h"

/**
 * *binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to node to find sibling.
 *
 * Return: Pointer to sibling node or NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = node->parent;
	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == node)
	{
		return (parent->right);
	}
	else
	{
		return (parent->left);
	}
}
