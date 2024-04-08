#include "binary_trees.h"

/**
* binary_tree_insert_left - function that deletes an entire binary tree
* @tree:  a pointer to the root node of the tree to delete
* Return: pointer to the newly created node or NULL on failureor
* or if parent is NULL
*/
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
	{
		;
	}

	while(tree->left != NULL && tree->right != NULL)
	{
		free(tree->left);
		free(tree->right);
	}
	free(tree);
}
