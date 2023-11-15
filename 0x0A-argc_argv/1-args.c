#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed to it
 * @argc: Arguments counter
 * @argv: Pointer to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
