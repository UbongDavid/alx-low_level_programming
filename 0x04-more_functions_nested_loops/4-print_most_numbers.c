#include "main.h"
/**
 * print_most_numbers - prints 0 - 9, a new line, omit 2 and 4
 *
 * Return: Nil
 */

void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
		if (c == 1 || c == 3)
		{
			c++;
		}
	}
	_putchar('\n');
}
