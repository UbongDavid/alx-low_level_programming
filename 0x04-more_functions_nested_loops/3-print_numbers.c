#include "main.h"
/**
 * print_numbers - prints 0 - 9 followed by a new line
 *
 * Return: Nil
 */

void print_numbers(void)
{
	char c;

	for (c = 1; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
