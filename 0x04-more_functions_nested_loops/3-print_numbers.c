#include "main.h"
/**
 * print_numbers - prints 0 - 9 followed by a new line
 *
 * Return: Nil
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
