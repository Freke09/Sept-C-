#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(*a));

	if (a == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		a[i] = min + i;

	return (a);
}
