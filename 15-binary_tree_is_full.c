#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is not full else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right_value, left_value;

	if (!tree)
		return (0);


	(void)right_value;
	(void)left_value;
	right_value = binary_tree_is_full(tree->right);
	left_value = binary_tree_is_full(tree->left);

	if (left_value == right_value)
		return (1);
	else
		return (0);

}
