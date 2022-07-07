#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if the entered character is a digit
 * @c: Integer Variable
 * Return: 1 if its a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
