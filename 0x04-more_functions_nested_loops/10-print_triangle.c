#include "main.h"

/**
 * print_triangle - prints a triangle using the # symbol
 * @size: AN Integer Variable
 * Return: Nil
 */
void print_triangle(int size)
{

	if (size > 0)
	{
		b = size - 1;
		for (a = 0; a < size ; a++)
		{
			for (m = b; m > 0 ; m--)

			{
				_putchar (' ');
			}
			for (n = 0; n <= a; n++)
			{
				_putchar (35);
			}
			b--;
			_putchar ('\n');
		}
	}

	else
	{
		_putchar ('\n');
	}

}
