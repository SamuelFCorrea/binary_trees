#include "binary_trees.h"

/**
 * binary_tree_preorder - principal function
 * @tree: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	preorder(tree, func);
}

/**
 * preorder - goes through a binary tree using pre-order traversal
 * @act: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void preorder(const binary_tree_t *act, void (*func)(int))
{
	func(act->n);
	po_left(act, func);
	po_right(act, func);
}

/**
 * po_left - moves to the left
 * @act: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void po_left(const binary_tree_t *act, void (*func)(int))
{
	if (act->left)
		preorder(act->left, func);
}

/**
 * po_right - moves to the right
 * @act: root node
 * @func: function to print the node data
 *
 * Return: none
 */

void po_right(const binary_tree_t *act, void (*func)(int))
{
	if (act->right)
		preorder(act->right, func);
}
