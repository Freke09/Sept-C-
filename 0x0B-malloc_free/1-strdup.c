#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contain a copy of the string given as a parameter
 * @str: Pointer to the string
 * Return: The address of the newly allocated memory
 */

char *_strdup(char *str)
{
	char *fre;
	int a, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	fre = (char *)malloc((sizeof(char) * j) + 1);

	if (fre == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < j; a++)
	{
		fre[a] = str[a];
	}

	fre[j] = '\0';

	return (fre);
}
