#include "binary_trees.h"

/**
* binary_tree_balance - function that measures the balance of a binary tree
* @tree: pointer to the binary tree
* Return: balance factor of the binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	int h_left = 0;
	int h_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		h_left = binary_tree_balance(tree->left);
	}

	if (tree->right != NULL)
	{
		h_right = binary_tree_balance(tree->right);
	}

	balance = h_left - h_right;

	return (balance);
}
