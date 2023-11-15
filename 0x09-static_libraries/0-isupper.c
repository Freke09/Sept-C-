#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* _isupper - checks for upppercase character
* @c: the character being checked
* Return: 1 uf character is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
