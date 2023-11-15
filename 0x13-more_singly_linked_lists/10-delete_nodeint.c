#include "lists.h"

/**
* delete_nodeint_at_index - Deletes a node at index of a listint_t linked list
* @head: Pointer to the pointer of the list
* @index: Index of node that should be deleted
* Return: 1 if succeeded, and -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	prev = NULL;

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	prev->next = current->next;
	free(current);
	return (1);
}
