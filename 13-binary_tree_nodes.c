#include "binary_trees.h"

/**
 * binary_tree_nodes - count the leave nodes
 * @tree: root node to count the leaves
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	 size_t cnt = 0;
	if (tree == NULL)
		return (0);

	cnt += (tree->left || tree->right) ? 1 : 0;
	cnt += binary_tree_nodes(tree->left);
	cnt += binary_tree_nodes(tree->right);
	return (cnt);
}
