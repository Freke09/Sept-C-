#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for integer in an array
* @array: the array to search in
* @size: the number of elements in the array
* @cmp: a pointer to the comparison function
* Return: the index of the first element, or -1 if no element matches
* or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
