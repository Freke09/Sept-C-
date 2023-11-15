#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _memcpy - A functon that copies memory area
* @dest: Destination address
* @src: Source address
* @n: Number of bytes to be copied
* Return: A pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b = 0;

	while (b < n)
	{
		dest[b] = src[b];
		b++;
	}


	return (dest);

}
