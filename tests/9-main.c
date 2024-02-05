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
    size_t hght;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    binary_tree_print(rt);

    hght = binary_tree_height(rt);
    printf("Height from %d: %lu\n", rt->n, hght);
    height = binary_tree_height(rt->right);
    printf("Height from %d: %lu\n", rt->right->n, hght);
    hght = binary_tree_height(rt->left->right);
    printf("Height from %d: %lu\n", rt->left->right->n, hght);
    return (0);
}
