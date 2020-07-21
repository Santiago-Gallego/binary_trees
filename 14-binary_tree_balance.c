#include "binary_trees.h"
/**
 * binary_tree_height - size the height if a binary tree
 * @tree: binary tree
 * Return: height from the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l, h_r;

	h_l = h_r = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	h_l = binary_tree_height(tree->left);
	h_r = binary_tree_height(tree->right);
	if (h_l >= h_r)
		return (h_l + 1);
	else
		return (h_r + 1);
}
/**
 * binary_tree_balance - masure the balance factor in a binary tree
 * @tree: binary tree
 * Return: balance factor from the binary tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_l, h_r;

	h_l = h_r = 0;
	if (!tree)
		return (0);
	h_l = (int)binary_tree_height(tree->left);
	h_r = (int)binary_tree_height(tree->right);
	return (h_l - h_r);
}
