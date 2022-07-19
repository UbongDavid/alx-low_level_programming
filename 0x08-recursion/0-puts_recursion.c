#include "main.h"

/**
 * *_memset - prints a string followed by a newline
 * @s: a string variable
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (! *s)
	{
		_putchar('\n');
		return;
	}
 	_putchar(*s);
	s++;
	_puts_recursion(s);
}
