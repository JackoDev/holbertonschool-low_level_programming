#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to head of the list
 * Return: its a void function
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
