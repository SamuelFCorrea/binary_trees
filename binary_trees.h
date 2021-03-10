#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/*		Fuctions prototypes		*/

/*		Print the tree		*/
void binary_tree_print(const binary_tree_t *);

/*		Creates a new node		*/
binary_tree_t *binary_tree_node(binary_tree_t *, int);

/*		Insert a new node as the left-child of another node		*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *, int);

/*		Insert a new node as the right-child of another node		*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *, int);

/*		Frees a tree		*/
void binary_tree_delete(binary_tree_t *);

/*		Check if a node is a leaf		*/
int binary_tree_is_leaf(const binary_tree_t *);

/*		Check if a node is a root		*/
int binary_tree_is_root(const binary_tree_t *);

/*		goes through a binary tree using pre-order traversal		*/
void binary_tree_preorder(const binary_tree_t *, void (*)(int));
void preorder(const binary_tree_t *, void (*)(int));
void po_left(const binary_tree_t *, void (*)(int));
void po_right(const binary_tree_t *, void (*)(int));
/*******************************************************************/

/*		goes through a binary tree using in-order traversal		*/
void binary_tree_inorder(const binary_tree_t *, void (*)(int));
void inorder(const binary_tree_t *, void (*)(int));
void in_left(const binary_tree_t *, void (*)(int));
void in_right(const binary_tree_t *, void (*)(int));
/*******************************************************************/

/*		goes through a binary tree using post-order traversal		*/
void binary_tree_postorder(const binary_tree_t *, void (*)(int));
void postorder(const binary_tree_t *, void (*)(int));
void pos_left(const binary_tree_t *, void (*)(int));
void pos_right(const binary_tree_t *, void (*)(int));
/*******************************************************************/

/*		measure the tree		*/
size_t binary_tree_height(const binary_tree_t *);
size_t auxf(const binary_tree_t *);
/*******************************************************************/

/*		measures the depth of a node in a binary tree		*/
size_t binary_tree_depth(const binary_tree_t *);

/*		measures the size of a binary tree		*/
size_t binary_tree_size(const binary_tree_t *);

/*		Counts the leaves in a binary tree		*/
size_t binary_tree_leaves(const binary_tree_t *);

/*		counts the nodes with at least 1 child in a binary tree		*/
size_t binary_tree_nodes(const binary_tree_t *);

/*		measures the balance factor of a binary tree		*/
int binary_tree_balance(const binary_tree_t *);
int balance(const binary_tree_t *);
/*******************************************************************/

/*		Checks if a binary tree is full		*/
int binary_tree_is_full(const binary_tree_t *);

/*		checks if a binary tree is perfect		*/
int binary_tree_is_perfect(const binary_tree_t *);
int depth(const binary_tree_t *);
int full(const binary_tree_t *);
/*******************************************************************/

/*		finds the sibling of a node		*/
binary_tree_t *binary_tree_sibling(binary_tree_t *);



#endif /* _BINARY_TREES_H_ */