#include "main.h"

/**
* _strncpy - A function to copy string
* @dest: Destination string array
* @src: Source string array
* @n: lenth of the integer
* Return: Integer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);

}
