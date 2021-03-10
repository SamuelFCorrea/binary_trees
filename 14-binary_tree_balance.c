#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = balance(tree->left);
	if (tree->right)
		r = balance(tree->right);

	return ((l - 1) - (r - 1));
}

/**
 * balance - measures the balance factor of a binary tree
 * @tree: root
 *
 *
 * Return: number of nodes
 */

int balance(const binary_tree_t *tree)
{
	int l = 1, r = 1;

	if (tree->left)
		l += balance(tree->left);
	if (tree->right)
		r += balance(tree->right);

	if (l > r)
		return (l);
	return (r);
}
