#include "main.h"

/**
 * print_alphabet_x10 -> This prints all letters of the alphabet, 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{ char k;
int c;

for (c = 1; c <= 10; c++)
{
	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
		_putchar('\n');
}
}
