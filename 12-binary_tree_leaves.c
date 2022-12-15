#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leave nodes
 * @tree: root node to count the leaves
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	 size_t left_cnt = 0, cnt = 0;
	 size_t right_cnt = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		cnt = cnt + 1;
	left_cnt = binary_tree_leaves(tree->left);
	right_cnt = binary_tree_leaves(tree->right);
	cnt = left_cnt + right_cnt;
	return ((!left_cnt && !right_cnt) ? cnt + 1 : cnt + 0);
}
