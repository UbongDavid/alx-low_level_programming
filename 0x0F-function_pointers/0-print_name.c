#include "function_pointers.h"

/**
 * print_name- A program that prints a Name
 * @name: Name argument
 * @f: Pointer to a function that prints the name in specified format
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || F == NULL)
		return;
	f(name);
}
