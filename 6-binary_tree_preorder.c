#include "binary_trees.h"

/**
 * binary_tree_preorder - prints tree in preorder
 * @tree: the tree to be traversed
 * @func: function to be executed in traversal
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
