#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the integer size
 * @c: The character to be initialized
 * Return: A pointer
 */

char *create_array(unsigned int size, char c)
{
	char *myArray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	myArray = malloc(size * sizeof(char));

	if (myArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		myArray[i] = c;
	}

	return (myArray);

}
