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
    size_t dpth;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    binary_tree_print(rt);

    dpth = binary_tree_depth(rt);
    printf("Depth of %d: %lu\n", rt->n, dpth);
    depth = binary_tree_depth(rt->right);
    printf("Depth of %d: %lu\n", rt->right->n, dpth);
    depth = binary_tree_depth(rt->left->right);
    printf("Depth of %d: %lu\n", rt->left->right->n, dpth);
    return (0);
}
