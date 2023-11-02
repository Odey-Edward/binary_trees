#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance -  measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height of a tree or 0 If tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height = 0;
	int left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (height);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);
	height++;

	height += (left_height - right_height);

	height -= right_height;

	return (height);
}
