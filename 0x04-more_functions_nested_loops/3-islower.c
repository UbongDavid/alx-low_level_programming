#include "main.h"
#include <ctype.h>
/**
 * _islower - check if the entered character is lowercase alphabet
 * @c: Integer Variable
 * Return: Always 0.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
