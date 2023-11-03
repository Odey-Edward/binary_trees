#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * return NULL If no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if ((!first || !second) ||
	(!first->parent || !second->parent))
		return (NULL);


	if (first->parent == second->parent)
		return (first->parent);

	if (first->left == second || first->right == second)
		return (second->parent);
	if (second->left == first || second->right == first)
		return (first->parent);

	return (binary_trees_ancestor(first->parent, second->parent));

}
