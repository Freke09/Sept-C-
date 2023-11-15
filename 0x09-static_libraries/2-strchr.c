#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strchr - A function that locates a character in a string
* @s: The string array
* @c: The character to be located
* Return: NULL
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);
	return (NULL);

}
