#include "binary_trees.h"

/**
* binary_tree_insert_right - adds a node to the right of its parent
* @parent: pointer to the parent node
* @value: value contained in the new node
* Return: adress of the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
        parent->right = new_node;
    }
	else
	{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}