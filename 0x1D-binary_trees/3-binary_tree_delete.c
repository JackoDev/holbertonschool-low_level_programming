#include "binary_trees.h"
/**
 * binary_tree_delete - a function that delete a entire b tree
 * @tree: a pointer to the root of the tree
 * Return: its a void fucntion
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
