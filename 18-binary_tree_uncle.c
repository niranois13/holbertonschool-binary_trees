#include "binary_trees.h"

/**
* binary_tree_uncle - function that finds the uncle of a given node
* @node: pointer to the root of the binary tree
* Return: adress of the uncle, NULL on failure
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left != NULL && node->parent->parent->right == node)
		return (node->parent->parent->left);

	if (node->parent->parent->right != NULL && node->parent->parent->left == node)
		return (node->parent->parent->right);

	else
		return (NULL);
}
