#include "lists.h"
/**
 * add_nodeint - add a new node at the beggining of the linked list.
 * @head: pointer to the first element of the list
 * @n: the cpontent of the new node for the list
 * Return: the adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
