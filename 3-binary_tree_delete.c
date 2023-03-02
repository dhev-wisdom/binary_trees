#include "binary_trees.h"

/*
 * binary_tree_delete - function deletes an entire binary tree
 * @tree: pointer to root node of tree to delete
 * Return: NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(left);
		binary_tree_delete(right);
		free(tree);
	}
}
