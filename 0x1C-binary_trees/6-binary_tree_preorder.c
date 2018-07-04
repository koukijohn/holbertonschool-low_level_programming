#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses through binary tree w/ pre-order traversal.
 * @tree: Pointer to root node of tree to traverse.
 * @func: Pointer to function to call for each node. (must be passed as param)
 *
 * Return: Void.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
