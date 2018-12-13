#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int full;
/*
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    root->left->left = binary_tree_node(root->left, 10);
    binary_tree_print(root);
*/
        root = binary_tree_node(NULL, 98);
        root->left = binary_tree_node(root, 12);
        root->right = binary_tree_node(root, 402);
        root->left->left = binary_tree_node(root->left, 6);
        root->left->right = binary_tree_node(root->left, 56);
        root->left->right->left = binary_tree_node(root->left->right, 48);
        root->left->right->left->right = binary_tree_node(root->left->right->left, 50);
        root->left->right->left->right->right = binary_tree_node(root->left->right->left->right, 52);
        root->right->left = binary_tree_node(root->right, 256);
        root->right->right = binary_tree_node(root->right, 512);
        root->left->left->left = binary_tree_node(root->left->left, 3);
        root->left->left->right = binary_tree_node(root->left->left, 8);
        root->right->right->left = binary_tree_node(root->right->right, 300);
        root->right->right->right = binary_tree_node(root->right->right, 612);
//        root->left->left->left->left = binary_tree_node(root->left->left->left, 1);
//        root->right->right->left->left = binary_tree_node(root->right->right->left, 700);
        binary_tree_print(root);
    full = binary_tree_is_full(root);
    printf("Is %d full: %d\n", root->n, full);
    full = binary_tree_is_full(root->left);
    printf("Is %d full: %d\n", root->left->n, full);
    full = binary_tree_is_full(root->right);
    printf("Is %d full: %d\n", root->right->n, full);

 //   full = binary_tree_is_full(root->left->left->left->left);
 //   printf("Is %d full: %d\n", root->left->left->left->left->n, full);
    full = binary_tree_is_full(root->left->left->right);
    printf("Is %d full: %d\n", root->left->left->right->n, full);
    full = binary_tree_is_full(root->right->left);
    printf("Is %d full: %d\n", root->right->left->n, full);
    full = binary_tree_is_full(root->left->left);
    printf("Is %d full: %d\n", root->left->left->n, full);
    return (0);
}
