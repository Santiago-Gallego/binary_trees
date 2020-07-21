#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 * Return: one pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (!parent)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (!right_node)
		return (NULL);

	right_node->n = value;
	right_node->parent = parent;
	right_node->right = parent->right;
	right_node->left = NULL;
	parent->right = right_node;
	if (right_node->right)
		right_node->right->parent = right_node;
	return (right_node);
}
