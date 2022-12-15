#include "binary_trees.h"


/**
 * binary_tree_height_x - calculate tree hight
 * @tree: the tree it traverse
 * Return: height
 */
size_t binary_tree_height_x(const binary_tree_t *tree)
{
	 size_t height_l;
	 size_t height_r;
	if (tree == NULL)
		return (0);
	height_l = tree->left ? 1 + binary_tree_height_x(tree->left) : 1;
	height_r = tree->right ? 1 + binary_tree_height_x(tree->right) : 1;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - return the balance factor
 * @tree: root node of the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	 int right = 0, left = 0, total = 0;
	if (tree)
	{
		left = (int)binary_tree_height_x(tree->left);
		right = (int)binary_tree_height_x(tree->right);
		total = left - right;
	}
	return (total);
}
