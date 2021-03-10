#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 * 1 child in a binary tree
 *
 * @tree: root
 *
 * Return: number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		r += binary_tree_nodes(tree->left);
	if (tree->right)
		r += binary_tree_nodes(tree->right);

	if (tree->right || tree->left)
		r++;

	return (r);
}
