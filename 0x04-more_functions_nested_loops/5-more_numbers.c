#include "main.h"
/**
 * more_numbers - prints 0 - 14, 10 times, followed by a new line
 *
 * Return: Nil
 */

void more_numbers(void)
{
	int c;

	for (m = 1; m < 10; m++)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar(c + '0');
		}

		_putchar('\n');
	}
}
