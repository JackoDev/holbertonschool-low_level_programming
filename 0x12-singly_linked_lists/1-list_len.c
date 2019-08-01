#include "lists.h"
/**
 * list_len - return the number of nodes into a list
 * @h: the list
 *
 * Return: the number of nodes inside the list
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
