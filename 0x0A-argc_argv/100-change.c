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
	int numberOfCoins = 0;
	int coinArray[5] = {25, 10, 5, 2, 1};
	int c;
	int change;

	if ((argc != 2))
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = atoi(argv[1]);
		for (c = 0; c <= 4; c++)
		{
			numberOfCoins += (change / coinArray[c]);
			change = change % coinArray[c];
		}
	}
	printf("%i\n", numberOfCoins);
	return (0);
}
