#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
* binary_tree_nodes - function that counts the nodes with
* at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
*
* Return: the the number of nodes with at least one child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int number_nodes;
	int number_leaves;
	int internal_nodes;

	if (tree == NULL)
		return (0);

	number_nodes = binary_tree_size(tree);
	number_leaves = binary_tree_leaves(tree);

	internal_nodes = number_nodes - number_leaves;

	return (internal_nodes);
}

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
	int count_total;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		count_left = binary_tree_size(tree->left);
		count_right = binary_tree_size(tree->right);
	}

	count_total = (count_left + count_right) + 1;

	return (count_total);
}

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
