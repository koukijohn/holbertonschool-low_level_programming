#include "binary_trees.h"

/**
 * *binary_tree_insert_right - Inserts a node as right-child of another node.
 * @parent: Pointer to node to insert right-child in.
 * @value: Value to srtore in new node.
 *
 * Return: Pointer to created node, or NULL on FAILURE or if parent NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	/* Parent right-child must be set as the right-child of the new node */
	new_node->right = parent->right;
	/* if parent already has right child ... new_node takes place */
	if (new_node->right != NULL)
	{
		new_node->right->parent = new_node;
	}
	/* This inserts new_node into the right child of parent */
	parent->right = new_node;
	return (new_node);
}
