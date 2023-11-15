#include "lists.h"

/**
* listint_len - Returns the number of elements in a listint_t list
* @h: Pointer
* Return: The number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
