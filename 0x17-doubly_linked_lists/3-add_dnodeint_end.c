#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a double link list
 * @head: the head of the double link list
 * @n: data inside the new node
 * Return: the adress of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tempo;

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
		tempo = *head;
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
		}
		tempo->next = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = (tempo);
	}
	return (new_node);
}
