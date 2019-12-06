#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the size of a b tree
 * @tree: a pointer to the root
 * Return: the size of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	return (h_left - h_right);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node
 * Return: the height of a b tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	return (h_left > h_right ? h_left + 1 : h_right + 1);
}
