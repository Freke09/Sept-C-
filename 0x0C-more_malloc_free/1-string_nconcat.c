#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
* @s1: first string to join
* @s2: second to string to join
* @n: the unsigned integer
* Return: pointer or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, first = 0, second = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	first = strlen(s1);
	second = strlen(s2);

	if (n > second)
		n = second;

	a = malloc(first + n + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < first + n; i++)
	{
		if (*s1)
		{
			a[i] = *s1;
			s1++;
		}
		else
		{
			a[i] = *s2;
			s2++;
		}
	}

	a[i] = '\0';
	return (a);
}
