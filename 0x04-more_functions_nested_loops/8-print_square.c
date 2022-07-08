#include "main.h"

/**
 * print_square - This function prints # to represent a square
 * @size: An integer variable
 * Return: Nil
 */

void print_square(int size)
{

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar (35);

			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}

}
