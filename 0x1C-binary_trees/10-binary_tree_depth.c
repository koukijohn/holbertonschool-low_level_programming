#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of node in binary tree.
 * @tree: Pointer to node to measure depth of.
 *
 * Return: depth or 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}
	for (depth = 0; tree->parent != NULL; depth++)
	{
		tree = tree->parent;
	}
	return (depth);
}
