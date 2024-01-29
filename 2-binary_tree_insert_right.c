#include "binary_trees.h"

/**
 * binary_tree_insert_right - node inserted as right-child
 *                            of another in binary tree.
 * @parent: pointer to node to insert right-child in.
 * @value: value where new node is stored in.
 *
 * Return: for parent is NULL or error - NULL.
 *         else - pointer to new node.
 *
 * Description: If parent already has right-child, new node
 *              takes its place and old right-child is set as
 *              the right-child of new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);

	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		n->right = parent->right;
		parent->right->parent = n;
	}
	parent->right = n;

	return (n);
}
