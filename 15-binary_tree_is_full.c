#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks id a binary tree is full.
 * @tree: pointer to node of tree to be checked
 * Return: 0 if tree is NULL or tree is not full, otherwise 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: pointer to root node of tree to check.
 *
 * Return: 0 if tree is not full or tree doesn't exist. Otherwise, 1.
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		     is_full_recursive(tree->left) == 0 ||
		      is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
