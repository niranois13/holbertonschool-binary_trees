#include "binary_trees.h"

/**
* binary_tree_postorder - function that that goes through a binary list using
*							postorder traversal
* @tree: pointer to the root of the binary tree to traverse
* @func: pointer to a function that prints content of each node traversed
* Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
