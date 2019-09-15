#include "lists.h"
/**
 * add_dnodeint - add a new node at the begginig of a double link list
 * @head: the head of the double link list
 * @n: data inside the new node
 * Return: the adress of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		(*head) = new_node;
		return (*head);
	}
	else
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		(*head)->prev = new_node;
		(*head) = new_node;
		return (*head);
	}
}
