#include "main.h"

/**
 * _strlen_recursion - prints a string followed by a newline
 * @s: a string variable
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
