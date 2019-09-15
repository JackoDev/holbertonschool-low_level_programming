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
 * get_dnodeint_at_index - return the node of the nth position in a link list
 * @head: the head of the double link list
 * @index: the position to search the node
 * Return: the node required in the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tempo;
	unsigned int counter = 0;

	tempo = head;

	if (head == NULL)
		return (NULL);
	if (index == 0 && head->next == NULL && head->prev == NULL)
		return (head);
	if (index == 0)
		return (head);
	if (index > (dlistint_len(head)))
		return (NULL);

	while (tempo != NULL && counter < index)
	{
		counter++;
		tempo = tempo->next;
	}
	return (tempo);
}
