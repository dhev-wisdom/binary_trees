#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes.
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0 if @tree is NULL, otherwise number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t nodes = 0;

	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
