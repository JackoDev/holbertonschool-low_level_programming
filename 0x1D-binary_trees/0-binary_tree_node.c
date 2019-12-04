#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
		if (new == NULL)
			return (NULL);
	if (parent != NULL && parent->n > value)
		parent->left = new;
	else if (parent != NULL && parent->n < value)
		parent->right = new;

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	return (new);
}
