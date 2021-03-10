#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root pointer
 *
 * Return: heigth of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	if (!tree)
		return (0);

	h = auxf(tree);

	return (h - 1);
}

/**
 * auxf - measures the height of a binary tree
 * @tree: root pointer
 *
 * Return: none
 */

size_t auxf(const binary_tree_t *tree)
{
	size_t l = 1, r = 1;

	if (tree->left)
		l += auxf(tree->left);
	if (tree->right)
		r += auxf(tree->right);

	if (l > r)
		return (l);
	return (r);
}
