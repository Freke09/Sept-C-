#include "lists.h"

/**
* add_node_end - adds a node at the end of a list_t list
* @head: Pointer to the pointer to the head
* @str: The string to be added
* Return: The address of the new elements, or NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;

		while (current_node->next != NULL)
			current_node = current_node->next;

		current_node->next = new_node;
	}

	return (new_node);

}
