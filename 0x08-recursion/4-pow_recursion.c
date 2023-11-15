#include "main.h"

/**
* _pow_recursion - A function that returns the value of x
* raied to the power of y
* @x: The x variable
* @y: the y variable
* Return: The result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
