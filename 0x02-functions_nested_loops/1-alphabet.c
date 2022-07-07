#include "main.h"

/**
 * print_alphabet -> This function prints all letters of the alphbet
 * @c: parameter of type char
 * Return: Void.
 */

void print_alphabet(void)
{ char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
		_putchar('\n');
}
