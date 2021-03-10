#include "binary_trees.h"

/**
 * binary_tree_postorder - main fuction
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	postorder(tree, func);
}

/**
 * postorder - recursive function
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void postorder(const binary_tree_t *tree, void (*func)(int))
{
	pos_left(tree, func);
	pos_right(tree, func);
	func(tree->n);
}

/**
 * pos_left - move to the right
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void pos_left(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		postorder(tree->left, func);
}

/**
 * pos_right - move to the right
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void pos_right(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->right)
		postorder(tree->right, func);
}
