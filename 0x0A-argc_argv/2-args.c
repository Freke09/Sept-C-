#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: Arguments counter
 * @argv: Array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
