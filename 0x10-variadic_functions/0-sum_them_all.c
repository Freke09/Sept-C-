#include "variadic_functions.h"
#include <stdio.h>

/**
* sum_them_all - a function that returns the sum of all its parameters
* @n: fixed number of arguments
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_items;
	unsigned int i;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(sum_items, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(sum_items, int);
	}

	va_end(sum_items);

	return (add);
}
