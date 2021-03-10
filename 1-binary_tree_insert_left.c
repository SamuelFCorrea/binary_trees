#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the
 * left-child of another node
 *
 * @parent: parent node
 * @value: node value
 *
 * Return: Pointer to the new node, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/* If the parent dont has a left node */
	if (!parent->left)
		parent->left = new;
	/**
	 * If parent already has a left-child,
	 * the new node must take its place, and the old
	 * left-child must be set as the left-child of the new node
	 */
	else if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
		parent->left = new;
	}

	return (new);
}
