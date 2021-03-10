#include "binary_trees.h"

/**
 * binary_tree_inorder - main fuction
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	inorder(tree, func);
}

/**
 * inorder - recursive function
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void inorder(const binary_tree_t *tree, void (*func)(int))
{
	in_left(tree, func);
	func(tree->n);
	in_right(tree, func);
}

/**
 * in_left - move to the left
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void in_left(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		inorder(tree->left, func);
}

/**
 * in_right - move to the right
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void in_right(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->right)
		inorder(tree->right, func);
}
