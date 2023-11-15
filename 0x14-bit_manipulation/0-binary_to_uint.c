#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: Pointer to the string of binary numbers
* Return: The converted number
*	0 if there is a char in the string that is not 0 or 1
*	0 of b is null
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		decimal = (decimal << 1) | (*b - '0');

		b++;
	}

	return (decimal);
}
