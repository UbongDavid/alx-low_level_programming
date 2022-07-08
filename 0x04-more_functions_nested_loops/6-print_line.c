#include "main.h"
/**
 * print_line - this function draws a straight line in the terminal
 * @n: Integer value
 * Return: Nil
 */

void print_line(int n)
{
	/* char c; */
	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
