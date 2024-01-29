#include "binary_trees.h"

/**
 * binary_tree_insert_left - node inserted as left-child of
 *                           another in binary tree
 * @parent: pointer to node to put left-child in.
 * @value: value to store new node in
 *
 * Return: for parent is NULL or error - NULL.
 *         else - pointer to new node.
 *
 * Description: If parent already has left-child, new node
 *              takes its place and old left-child is set as
 *              left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);

	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		n->left = parent->left;
		parent->left->parent = n;
	}
	parent->left = n;

	return (n);
}
