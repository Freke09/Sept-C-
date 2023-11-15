#include "main.h"


/**
* _strncat -A function that concatenates two string
* @dest: Destination string array
* @src: Source string array
* @n: The n variabe
* Return: A prointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (j = 0; src[i] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);

}
