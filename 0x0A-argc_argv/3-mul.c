#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the product of two numbers
 * @argc: total number of passed command-line arguments
 * @argv: array containing passed CLI arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
