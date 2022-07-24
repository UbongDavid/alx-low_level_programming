#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints its name
 * @argc: total number of passed command-line arguments
 * @argv: array containing passed CLI arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int argumentIndex;

	for ((argumentIndex = 0); (argumentIndex <= argc - 1); argumentIndex++)
	{printf("%s\n", argv[argumentIndex]); }
	return (0);
}
