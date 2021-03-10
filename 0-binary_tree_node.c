#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node
 * @parent: node parent
 * @value: node value
 *
 * Return: Pointer to the new node, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* Memory allocation to the new node */
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	/* Always the default childs node will be NULL */
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	/* If parent is NULL the node will be the root */
	if (!parent)
	{
		new->parent = NULL;
		return (new);
	}

	new->parent = parent;

	/* We going to assing the node with priority in the left */
	if (!parent->left)
		parent->left = new;
	else if (!parent->right)
		parent->right = new;

	return (new);
}
