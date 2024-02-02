#include "binary_trees.h"

/**
 * binary_tree_uncle - uncle of a node in
 *                     binary tree found.
 * @node: Pointers to node to find uncle of.
 *
 * Return: Null if node is NULL or no uncle.
 *         else a pointer to uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent == NULL ||
            node == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
