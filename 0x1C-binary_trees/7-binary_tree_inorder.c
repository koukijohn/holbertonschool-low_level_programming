#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses through binary tree w/ in-order traversal
 * @tree: Pointer to root node of tree to traverse.
 * @func: Pointer to function to call for each node. Value must be passed.
 *
 * Return: Void.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
