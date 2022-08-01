#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that prints
 * @argv: array containing passed CLI arguments
 * Return: Always 0
 */

int main (void)
{
	char *fileName = __FILE__;
	char *fNameExtract = strrchr(t, '/');

	fNameExtract++;
	while(fNameExtract)
	{
		printf(fNameExtract);
		fNameExtract++;
	}
	return (0);

}
