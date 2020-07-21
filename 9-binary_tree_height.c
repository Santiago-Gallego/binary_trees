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
	if (tree->left)
		h_l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		h_r = 1 + binary_tree_height(tree->right);
	if (h_l > h_r)
		return (h_l);
	else
		return (h_r);
}
