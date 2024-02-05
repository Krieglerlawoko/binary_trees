#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *rt;
    size_t nods;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    binary_tree_print(rt);

    nods = binary_tree_nodes(rt);
    printf("Nodes in %d: %lu\n", rt->n, nods);
    nods = binary_tree_nodes(rt->right);
    printf("Nodes in %d: %lu\n", rt->right->n, nods);
    nods = binary_tree_nodes(rt->left->right);
    printf("Nodes in %d: %lu\n", rt->left->right->n, nods);
    return (0);
}
