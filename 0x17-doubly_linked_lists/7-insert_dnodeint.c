#include "lists.h"
/**
 * dlistint_len - return the len of a double link list
 * @h: the head of the double link list
 * Return: the len of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int counter = 0;

	if (h == NULL)
		return (0);
	if (h->next == NULL && h->prev == NULL)
		return (1);
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
/**
 * insert_dnodeint_at_index - add a new node at the index position
 * @h: the head of the double link list
 * @n: data inside the new node
 * @idx: index to insert the new node
 * Return: the adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tempo;
	unsigned int counter = 0;

	if (*h == NULL || h == NULL)
		return (NULL);
	tempo = *h;
	while (tempo != NULL)
	{
		if (idx == 0)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->prev = NULL;
			new_node->next = (*h)->next;
			*h = new_node;
			return (new_node);
		}
		tempo = tempo->next;
		counter++;
		if (counter == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->prev = tempo;
			new_node->next = tempo->next;
			new_node->next->prev = new_node;
			tempo->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
