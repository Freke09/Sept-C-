#include "main.h"
#include <stdio.h>

/**
* _puts - a function that prints a string
* @str: the string variable
* Rturn: Always 0
*/

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		putchar(str[x]);
		x++;
	}
	putchar('\n');

}
