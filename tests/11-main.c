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
    size_t siz;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    binary_tree_print(rt);

    siz = binary_tree_size(rt);
    printf("Size of %d: %lu\n", rt->n, siz);
    siz = binary_tree_size(rt->right);
    printf("Size of %d: %lu\n", rt->right->n, siz);
    siz = binary_tree_size(rt->left->right);
    printf("Size of %d: %lu\n", rt->left->right->n, siz);
    return (0);
}
