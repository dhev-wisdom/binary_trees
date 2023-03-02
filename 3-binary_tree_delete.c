#include "binary_trees.h"

/*
 * binary_tree_delete - function deletes an entire binary tree
 * @tree: pointer to root node of tree to delete
 * Return: NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree != NULL)
	{
		left = tree->left;
		right = tree->right;
		free(tree);
		binary_tree_delete(left);
		binary_tree_delete(right);
	}
	return (NULL);
}
