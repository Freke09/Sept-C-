#include "main.h"

/**
* _isalpha - checking for if a char is lowercase or uppercase
* @c: the character for checking
* Return: 1 if char is lowercase or uppercase,otherwise 0
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);

}
