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
    size_t size;
/*
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
*/
        root = binary_tree_node(NULL, 98);
        root->left = binary_tree_node(root, 12);
        root->right = binary_tree_node(root, 402);
        root->left->left = binary_tree_node(root->left, 6); 
        root->left->right = binary_tree_node(root->left, 56);
        root->right->left = binary_tree_node(root->right, 256);
        root->right->right = binary_tree_node(root->right, 512);
        root->left->left->left = binary_tree_node(root->left->left, 3); 
        root->left->left->right = binary_tree_node(root->left->left, 8); 
        root->right->right->left = binary_tree_node(root->right->right, 300);
        root->right->right->right = binary_tree_node(root->right->right, 612);
        root->left->left->left->left = binary_tree_node(root->left->left->left, 1); 
        root->right->right->left->left = binary_tree_node(root->right->right->left, 700);
        binary_tree_print(root);

    size = binary_tree_size(root);
    printf("Size of %d: %lu\n", root->n, size);
    size = binary_tree_size(root->right);
    printf("Size of %d: %lu\n", root->right->n, size);
    size = binary_tree_size(root->left->right);
    printf("Size of %d: %lu\n", root->left->right->n, size);
    
    size = binary_tree_size(root->right->right->left->left);
    printf("Size of %d: %lu\n", root->right->right->left->left->n, size);
    size = binary_tree_size(root->right->right->right);
    printf("Size of %d: %lu\n", root->right->right->right->n, size);
    size = binary_tree_size(root->right->left);
    printf("Size of %d: %lu\n", root->right->left->n, size);
    return (0);
}
