#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle nodee
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->parent == NULL)
		return (NULL);

	grand = parent->parent;

	if (grand->left == parent)
	{
		if (grand->right)
			return (grand->right);
	}
	else
	{
		if (grand->left)
			return (grand->left);
	}
	return (NULL);
}
