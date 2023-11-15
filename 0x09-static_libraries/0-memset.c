#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _memset - A function that fills memory with constant byte
* @s: Pointer
* @b: Value that will fill the n memory adress
* @n: The size of the array
* Return: Pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
