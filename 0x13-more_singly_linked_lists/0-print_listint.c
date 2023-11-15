#include "lists.h"

/**
* print_listint - Prints all element os a listint_t list
* @h: Pointer to the node
* Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		node_counter++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_counter);
}
