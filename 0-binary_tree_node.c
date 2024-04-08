#include "binary_trees.h"

/**
* binary_tree_node - function that adds a new node to a binary tree
* @parent: pointer to the parent node
* @value: value carried by the nwe node
* Return: pointer to the newly created node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc (sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    
    if (parent == NULL)
    {
        parent = new_node;
        return (new_node);
    }
    else if (parent->left == NULL)
    {
        parent->left = new_node;
    }
    else if (parent->right == NULL)
    {
        parent->right = new_node;
    }
    else
    {
        free(new_node);
        return (NULL);
    }
    
    return (new_node);
}