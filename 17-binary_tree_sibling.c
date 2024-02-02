#include "binary_trees.h"

/**
 * binary_tree_sibling - Sibling of node in
 *                       a binary tree found.
 * @node: Pointers to node to find sibling of.
 *
 * Return: Null if node is NULL or has no sibling.
 *         else - pointer to sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
