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
    size_t nodes;
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

    nodes = binary_tree_nodes(root);
    printf("Nodes in %d: %lu\n", root->n, nodes);
    nodes = binary_tree_nodes(root->right);
    printf("Nodes in %d: %lu\n", root->right->n, nodes);
    nodes = binary_tree_nodes(root->left->right);
    printf("Nodes in %d: %lu\n", root->left->right->n, nodes);
    
    nodes = binary_tree_nodes(root->left->left);
    printf("Nodes in %d: %lu\n", root->left->left->n, nodes);
    nodes = binary_tree_nodes(root->left->left->left);
    printf("Nodes in %d: %lu\n", root->left->left->left->n, nodes);
    nodes = binary_tree_nodes(root->right->right->right);
    printf("Nodes in %d: %lu\n", root->right->right->right->n, nodes);
    return (0);
}
