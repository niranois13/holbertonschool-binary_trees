#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree)

/**
* binary_tree_nodes - function that counts the nodes with
* at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
*
* Return: the the number of nodes with at least one child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int number_nodes = 0;
	int number_leaves = 0;

	number_nodes = binary_tree_size(tree);
	number_leaves = binary_tree_leaves(tree);

	return (number_nodes - number_leaves)
}

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
