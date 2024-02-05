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
    int ful;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    rt->left->left = binary_tree_node(rt->left, 10);
    binary_tree_print(rt);

    ful = binary_tree_is_full(rt);
    printf("Is %d full: %d\n", rt->n, ful);
    ful = binary_tree_is_full(rt->left);
    printf("Is %d full: %d\n", rt->left->n, ful);
    ful = binary_tree_is_full(rt->right);
    printf("Is %d full: %d\n", rt->right->n, ful);
    return (0);
}
