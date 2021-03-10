#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root
 *
 * Return: 1 if it's full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree->left && tree->right)
	{
		if (!binary_tree_is_full(tree->left))
			return (0);
		if (!binary_tree_is_full(tree->right))
			return (0);
		return (1);
	}
	else if (!tree->left && !tree->right)
		return (1);

	return (0);
}
