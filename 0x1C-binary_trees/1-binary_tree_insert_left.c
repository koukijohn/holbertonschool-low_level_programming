#include "binary_trees.h"

/**
 * *binary_tree_insert_left - Inserts node as left-child of another node.
 * @parent: Pointer to node to insert left-child in.
 * @value: Value to store in new node.
 *
 * Return: Pointer to created node, or NULL on FAILURE or if parent NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/*setting data for new_node from function prototype */
	new_node->n = value;
	new_node->parent = parent;
	/* old left-child is set as the left-child of the new node*/
	new_node->left = parent->left;
	/* setting right child of new_node equal to NULL */
	new_node->right = NULL;
	/* if parent already has left-child, new_node must take place*/
	if (new_node->left != NULL)
	{
		/* new_node taking place of parent-left-child */
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
