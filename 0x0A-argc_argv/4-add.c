#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - A program that adds positive numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 1 and 0
*/

int main(int argc, char *argv[])
{
	int a;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		int b;

		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (0);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);
	return (0);
}
