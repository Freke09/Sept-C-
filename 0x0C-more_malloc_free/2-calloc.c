#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: the number of elements in the aray
 * @size: the size of the array
 * Return: NULL if size if 0, NULL if malloc fails,
 * Pointer to the memory address if successful
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	nmemb = nmemb * size;

	while (nmemb--)
		ptr[nmemb] = 0;

	return (ptr);
}
