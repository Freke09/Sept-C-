#include "main.h"

/**
* _islower -check if a char c is lowercase
* @c: thw character for checking
*
* Return: 1 if char c is lowercase and 0 if otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
