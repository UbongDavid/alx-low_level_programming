#include "main.h"
/**
 * print_diagonal - this function draws a diagonal line in the terminal
 * @n: Integer value
 * Return: Nil
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			_putchar('\\');
			_putchar('\n');

			for (a = 1; a <= n; a++)
			{
				void createBlankSpace(void);
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}

void createBlankSpace(void)
/* createBlankSpace - Create blank spaces */
{
	_putchar(' ');
}
