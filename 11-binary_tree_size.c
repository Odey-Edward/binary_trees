#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the root node or 0 If node is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (size);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	size++;

	return (size);

}
