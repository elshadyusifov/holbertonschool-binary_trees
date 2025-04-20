#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves -  a function that counts the
 * leaves in a binary tree
 * @tree: a pointer to the root node of the tree
 * to count the number of leaves
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);
	if ((tree->right) == NULL && (tree->left) == NULL)
		return (leaves = 1);

	leaves = leaves +  binary_tree_leaves(tree->right);
	leaves = leaves +  binary_tree_leaves(tree->left);
	return (leaves);
}
