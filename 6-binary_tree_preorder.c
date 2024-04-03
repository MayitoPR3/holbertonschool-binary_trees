#include "binary_trees.h"

/**
* binary_tree_preorder - function that goes through a binary tree using
* pre-order traversal
* @tree: is a pointer to the root node
* @func: is a pointer to a function to call for each node
* Return: Nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	(void)(tree);

	if (tree == NULL && func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}

	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}
return;
}
