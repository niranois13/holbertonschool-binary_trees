#include "binary_trees.h"

/**
* binary_tree_height - function that goes through a binary tree
* using in-order traversal
* @tree: a pointer to the root node of the tree to measure the height.
*
* Return: the height of the tree or 0 if NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
	{
		return (height_left + 1);
	}
	else
	{
		return (height_right + 1);
	}
}
