#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
* @n: Function parameter
* @index: Index of the bit to be retrieved
* Return: The value of the bit at index, or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = 1UL << index;

	if ((n & mask) == mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
