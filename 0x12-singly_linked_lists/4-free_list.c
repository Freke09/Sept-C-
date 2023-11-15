#include "lists.h"

/**
* free_list - Free a list_t list
* @head: Pointer to the first node
*/

void free_list(list_t *head)
{
	list_t *current_node, *next;

	current_node = head;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next;
	}
}
