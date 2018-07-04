#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses binary tree w/ post-order traversal.
 * @tree: Pointer to root node of tree to traverse.
 * @func: Pointer to function to call for each node. Value must be passed.
 *
 * Return: Void.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
