#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is root of binary tree.
 * @node: points to the node to check.
 *
 * Return: If the node is root - 1.
 *         else - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node == NULL)
		return (0);

	return (1);
}
