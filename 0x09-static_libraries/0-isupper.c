#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if the entered character is uppercase alphabet
 * @c: Integer Variable
 * Return: 1 if uppercase,0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
