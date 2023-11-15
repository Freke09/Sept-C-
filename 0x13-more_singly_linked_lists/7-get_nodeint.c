#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a linstint_t linked list
* @head: Pointer to the list
* @index: Inex of the node
* Return: Null if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}

	return (NULL);
}
