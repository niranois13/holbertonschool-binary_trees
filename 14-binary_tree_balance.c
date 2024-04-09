#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to the binary tree
* Return: balance factor of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_left = binary_tree_height(tree->left);

	if (tree->right != NULL)
		height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
* binary_tree_balance - function that measures the balance of a binary tree
* @tree: pointer to the root of the binary tree
* Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_right = 0, h_left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		h_left = binary_tree_height(tree->left);

	if (tree->right != NULL)
		h_right = binary_tree_height(tree->right);

	return (h_left - h_right);
}
