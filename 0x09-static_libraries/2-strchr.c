#include "main.h"


/**
 * *_strchr - locates a specified character in a string
 * @s: pointer to the string
 * @c: character searched for
 * Return: first occurence of c if found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return ('\0');
}
