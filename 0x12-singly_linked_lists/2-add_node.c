#include "lists.h"

/**
* add_node - add new node at the beginning
* @head: pointer to the pointer of the head of the list_t list
* @str: string to be duplicated
* Return: the addres of the new elements, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
