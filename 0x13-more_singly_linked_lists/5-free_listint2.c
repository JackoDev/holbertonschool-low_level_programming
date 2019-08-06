#include "lists.h"
/**
 * free_listint2 - free a linked list.
 * @head: pointer to the first element of the list
 *
 * Return: it's a void function
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *newtwo;

	if (*head == NULL || head == NULL)
		return;
	newtwo = *head;
	while (newtwo != NULL && head != NULL)
	{
		new = newtwo;
		newtwo = newtwo->next;
		free(new);
	}
	*head = NULL;
}
