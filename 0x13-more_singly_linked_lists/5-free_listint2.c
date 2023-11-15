#include "lists.h"

/**
* free_listint2 - Frees a listint_t list
* @head: Pointer to the pointer of the list
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	head = NULL;
}
