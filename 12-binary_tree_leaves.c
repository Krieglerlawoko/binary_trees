#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in binary tree.
 * @tree: points to root node of the tree to count number of nodes.
 *
 * Return: If tree NULL, return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		n += (tree->left || tree->right) ? 1 : 0;
		n += binary_tree_nodes(tree->left);
		n += binary_tree_nodes(tree->right);
	}
	return (n);
}
