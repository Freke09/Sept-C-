#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - print strings followed by a new line
* @separator: the string to be printed between the strings
* @n: number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(strings);

	printf("\n");
}
