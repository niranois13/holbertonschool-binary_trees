#include "binary_trees.h"

/**
* binary_tree_leaves - function that prints the total number of leaves
* @tree: pointer to the root of the binary tree
* Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	leaves = leaves + binary_tree_leaves(tree->left);
	leaves = leaves + binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		leaves++;
	}

	return (leaves);
}
