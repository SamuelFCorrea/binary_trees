#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t r = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		r += binary_tree_depth(tree->parent);
		r++;
	}

	return (r);
}
