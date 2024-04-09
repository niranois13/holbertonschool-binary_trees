#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts the nodes with
* at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
*
* Return: the the number of nodes with at least one child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t childs = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		childs = 1 + childs + binary_tree_nodes(tree->left);

	else if (tree->right != NULL)
		childs = 1 + childs + binary_tree_nodes(tree->right);

	if (tree->parent == NULL)
		childs++;

	return (childs);
}
