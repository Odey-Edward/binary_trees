#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height of a tree or 0 If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (height);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	height++;

	if (left_height >= right_height)
		height += left_height;
	else
		height += right_height;

	return (height);

}
