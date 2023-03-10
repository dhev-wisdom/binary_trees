#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1, if tree is full,
 * otherwise, 0, if not full, or tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (full_tree(tree));
}

/**
 * full_tree - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1, if tree is full,
 * otherwise, 0, if not full, or tree is NULL
 */

int full_tree(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
