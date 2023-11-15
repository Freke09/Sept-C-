#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list
* @head: Pointer to the pointer to the head node
* Return: The head node's data
*/

int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	value = (*head)->n;
	tmp = *head;

	*head = (*head)->next;
	free(tmp);

	return (value);
}
