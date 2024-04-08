#include "binary_trees.h"

/**
* binary_tree_depth - function that prints th depth of nodes in a binary tree
* @tree: poiter to the binary tree
* Return: size of the depth of the node checked
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}

