#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: root node
 *
 * Return: none
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *aux, *parent;

	if (!tree)
		return;

	parent = tree;

	/* infinite bucle */
	while (1)
	{
		/* Walk trought the tree */
		if (parent->left)
			parent = parent->left;
		else if (parent->right)
			parent = parent->right;
		/* If the node is a leave delete it */
		else
		{
			aux = parent;
			parent = parent->parent;
			/* Disconect the node */
			if (parent->left)
				parent->left = NULL;
			else
				parent->right = NULL;
			/* Free it */
			free(aux);
		}
		/* If 'parent' is the root node end the bucle */
		if (parent == tree && (!tree->right && !tree->left))
		{
			free(tree);
			return;
		}
	}
}
