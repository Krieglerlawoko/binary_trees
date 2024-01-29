4-binary_tree_is_leaf.c
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is leaf of binary tree.
 * @node: pointer to node checked
 *
 * Return: If node is a leaf - 1.
 *         else - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
