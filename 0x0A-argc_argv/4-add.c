#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
		if (!isNumber(*argv))
		{
			printf("Error\n");
			return (1);
		}
		argumentSum += atoi(argv[argc]);
	}
	printf("%i\n", argumentSum);
	return (0);
}

/**
 * isNumber - A function that checks if a value is a number
 * @s: array variable containing the assessed value
 * Return: 1 if isNumber and 0 otherwise
 */
int isNumber(char s[])
{
	int i = 0;

	while (s[i])
	{
		/*if (isdigit(s[i]) == 0)*/
			printf("%i\n", s[i]);
			s++;
	}
/*	return (0);*/

	return (0);
}
