#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of a node
 * @tree: the node
 * Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	 size_t cnt;
	if (tree == NULL)
		return (0);
	cnt = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (cnt);
}
