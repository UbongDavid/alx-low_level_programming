#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the sum of two numbers
 * @argc: total number of passed command-line arguments
 * @argv: array containing passed CLI arguments
 * Return: Varies
 */

int main(int argc, char **argv)
{
	int argumentSum = 0;

	if ((argc == 1))
	{
		printf("0\n");
		return (0);
	}

	while (argc-- && argc != 0)
	{
		if (!atoi(argv[argc]) && !atoi(argv[argc]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		argumentSum += atoi(argv[argc]);
	}
	printf("%i\n", argumentSum);
	return (0);
}
