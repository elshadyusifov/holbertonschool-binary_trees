#include "binary_trees.h"
/**
 * tree_is_perfect - A function that says if a tree is perfect or not.
 * @tree: Tree to be checked
 * Return: 1 if tree is perfect
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + tree_is_perfect(tree->left);
		right = 1 + tree_is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - that checks if a binary tree is perfect
 * @tree: a pointer to the root node of tree
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int out = 0;

	if (!tree)
		return (0);
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		out = tree_is_perfect(tree);
		if (out != 0)
		{
			return (1);
		}
		return (0);
	}
}
