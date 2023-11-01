#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	parent->left = new_node;

	return (new_node);

}
