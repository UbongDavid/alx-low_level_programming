#include "main.h"

/**
 * _strlen - THis function returns length of a string
 * @s: string datatype
 *
 * Return: An integer value - string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
