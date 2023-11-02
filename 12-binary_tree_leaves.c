#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: no leaves of the root node or 0 If node is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_leaves = 0;

	if (!tree)
		return (no_leaves);

	no_leaves += binary_tree_leaves(tree->left);
	no_leaves += binary_tree_leaves(tree->right);
	if (tree && (!tree->left && !tree->right))
		no_leaves++;

	return (no_leaves);

}
