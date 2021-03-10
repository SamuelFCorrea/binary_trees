#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: node
 * @second: node
 *
 * Return: poiinter to the lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *parentt, *parentb;
	size_t d_f, d_s, i;

	/* no NULL nodes */
	if (!first || !second)
		return (NULL);

	/* calculate depth for each node */
	d_f = ancestor_depth(first);
	d_s = ancestor_depth(second);

	if (d_f <= d_s)
	{
		/** 
		 * if the first node is adove or in the
		 * same level than the second node
		 */
		parentt = first->parent;
		parentb = second->parent;
		/* if the node of bellow is child of the first node */
		if (parentb == first)
			return (parentb);
		/* move the deeper pointer to the same level */
		for (i = 1; i <= (d_s - d_f); i++)
			parentb = parentb->parent;
	}
	else
	{
		/** 
		 * if the second node is adove or in the
		 * same level than the second node
		 */
		parentt = second->parent;
		parentb = first->parent;
		/* if the node of bellow is child of the first node */
		if (parentb == second)
			return (parentb);
		/* move the deeper pointer to the same level */
		for (i = 1; i <= (d_f - d_s); i++)
			parentb = parentb->parent;
	}

	/* find the common parent*/
	while (parentt != parentb)
	{
		if (parentb)
			parentb = parentb->parent;
		if (parentt)
			parentt = parentt->parent;
	}

	return (parentt);
}

/**
 * ancestor_depth - depth of a node
 * @node: <--<<
 *
 * Return: node depth
 */

size_t ancestor_depth(const binary_tree_t *node)
{
	size_t r = 0;

	if (!node)
		return (0);

	if (node->parent)
	{
		r += ancestor_depth(node->parent);
		r++;
	}

	return (r);
}
