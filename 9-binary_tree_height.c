#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);
	if (right > left)
		return (1 + right);
	else
		return (1 + left);
}
