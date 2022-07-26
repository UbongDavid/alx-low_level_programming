#include "main.h"
#include <stdio.h>
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
		printf("i%", (*argv) * (*(argv+1)));
		return (0);
	}
}
