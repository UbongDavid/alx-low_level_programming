#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: an array of chess pieces
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
	int square, grid;

	for ((grid = FIRST); (grid <= LAST); grid++)
	{
		for ((square = FIRST); (square <= LAST); square++)
			_putchar(a[grid][square]);

		_putchar('\n');
	}
}
