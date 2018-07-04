#include "binary_trees.h"

/**
 * binary_tree_delete - This deletes an entire binary tree.
 * @tree: Pointer to root node of tree to delete.
 *
 * Return: Void.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	/* This will delete the left and right subtree */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	/* This will delete the node */
	free(tree);
}
