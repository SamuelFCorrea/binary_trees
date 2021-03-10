#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root
 *
 * Return: 1 if its', otherwhise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!full(tree))
		return (0);
	if (depth(tree->left) != depth(tree->right))
		return (0);
	return (1);
}

/**
 * full - checks if a binary tree is perfect
 * @tree: root
 *
 * Return: 1 if its', otherwhise 0
 */

int full(const binary_tree_t *tree)
{
	if (tree->left && tree->right)
	{
		if (!full(tree->left))
			return (0);
		if (!full(tree->right))
			return (0);
		return (1);
	}
	else if (!tree->left && !tree->right)
		return (1);

	return (0);
}

/**
 * depth - checks if a binary tree is perfect
 * @tree: root
 *
 * Return: 1 if its', otherwhise 0
 */

int depth(const binary_tree_t *tree)
{
	size_t l = 1, r = 1;

	if (!tree)
		return (-1);

	if (tree->left)
		l += depth(tree->left);
	if (tree->right)
		r += depth(tree->right);

	if (l > r)
		return (l);
	return (r);
}
