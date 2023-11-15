#include <stdio.h>

/**
 * main - A program that will prints its name
 * If renamed, it will print the new name without having to compile again
 * @argc: arguments counts
 * @argv: arguments vector - pointer array
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
