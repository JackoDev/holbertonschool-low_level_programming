#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of the linked list.
 * @head: pointer to the first element of the list
 * @n: the content of the new node for the list
 * Return: the adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmptr;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (NULL);

	if (*head == NULL)
		*head = new;
	else
	{
		tmptr = *head;
		while (tmptr->next != NULL)
		{
			tmptr = tmptr->next;
		}
		tmptr->next = new;
	}
	return (new);
}
