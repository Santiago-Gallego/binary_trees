#include "binary_trees.h"
/**
 * binary_tree_size - size from a binary tree
 * @tree: binary tree
 * Return: size from binary tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (!tree)
		return (0);
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
