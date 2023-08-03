#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the
 *left-child of another node
 *@parent: a parent to the new node
 *@value: the value of new node
 *Return: a pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t new_node;
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = value;
new_node->parent = parent;
if (parent->left == NULL)
{
new_node->left = NULL;
new_node->right = NULL;
}
else
{
new_node->left = parent->left;
parent->left = new_node;
}
return (new_node);
}
