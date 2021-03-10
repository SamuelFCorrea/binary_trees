#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree root
 *
 * Return: size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r = 1;

	if (!tree)
		return (0);

	if (tree->left)
		r += binary_tree_size(tree->left);
	if (tree->right)
		r += binary_tree_size(tree->right);

	return (r);
}
