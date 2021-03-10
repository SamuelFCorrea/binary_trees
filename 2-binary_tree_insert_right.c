#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 * left-child of another node
 *
 * @parent: parent node
 * @value: node value
 *
 * Return: Pointer to the new node, NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* This function doesn't create a root node */
	if (!parent)
		return (NULL);

	/* Memory allocation to the new node */
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	/* Always the default childs node will be NULL */
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;

	/* If the parent dont has a right node */
	if (!parent->right)
		parent->right = new;
	/**
	 * If parent already has a right-child,
	 * the new node must take its place, and the old
	 * right-child must be set as the right-child of the new node
	 */
	else if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
		parent->right = new;
	}

	return (new);
}
