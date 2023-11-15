#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to memory address
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ab;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return ((void *)malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ab = malloc(new_size);
	if (ab == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;

	while (old_size--)
		ab[old_size] = ((char *)ptr)[old_size];

	free(ptr);
	return ((void *)ab);
}
