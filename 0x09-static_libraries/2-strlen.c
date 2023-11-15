#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - a function that return the lenght of a string
* @s: the string variable
* Return: Always 0
*/

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;

	return (a);
}
