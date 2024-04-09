#include "binary_trees.h"

/**
* binary_tree_is_full - function that counts the nodes with
* at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
*
* Return: the the number of nodes with at least one child
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int child_1 = 0;
	int child_2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		child_1 = 1 + child_1 + binary_tree_is_full(tree->left);

	if (tree->right != NULL)
		child_2 = 1 + child_2 + binary_tree_is_full(tree->right);

	if (child_1 == child_2)
		return (1);

	else
		return (0);
}

