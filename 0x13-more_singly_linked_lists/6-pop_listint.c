#include "lists.h"
/**
 * pop_listint - delete a head node of a linked list.
 * @head: pointer to the first element of the list
 *
 * Return: the value of the n heads noden
 */
int pop_listint(listint_t **head)
{
	listint_t  *newptr;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	newptr = (*head)->next;
	free(*head);
	*head = newptr;
	return (n);
}
