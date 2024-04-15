#include "binary_trees.h"

/**
* binary_tree_size - function that measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
*
* Return: the size of a binary tree or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int count_left = 0;
	int count_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		count_left = binary_tree_size(tree->left);
		count_right = binary_tree_size(tree->right);
	}

	return ((count_left + count_right) + 1);
}
