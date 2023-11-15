#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: The newly allocated address in memory
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, x, y, z;
	char *new;

	x = y = 0;
	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
		{
			x++;
		}
	}
	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
		{
			y++;
		}
	}

	z = x + y;
	new = (char *)malloc(sizeof(char) * (z + 1));

	if (new == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < x; a++)
	{
		new[a] = s1[a];
	}
	for (b = 0; b < y; b++, a++)
	{
		new[a] = s2[b];
	}
	new[z] = '\0';
	return (new);
}
