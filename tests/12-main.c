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
    size_t lv;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    binary_tree_print(rt);

    lv = binary_tree_leaves(rt);
    printf("Leaves in %d: %lu\n", rt->n, lv);
    lv = binary_tree_leaves(rt->right);
    printf("Leaves in %d: %lu\n", rt->right->n, lv);
    lv = binary_tree_leaves(rt->left->right);
    printf("Leaves in %d: %lu\n", rt->left->right->n, lv);
    return (0);
}
