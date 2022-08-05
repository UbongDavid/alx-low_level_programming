#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints the sum of its optional arguments
 * @separator: Specifies the delimiter
 * @n: Specifies the number of optional arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	while (i < n)
	{
		if (*separator == 0)
		{
			va_end(ap);
		}
		if (i == (n - 1))
			printf("%i\n", va_arg(ap, int));
		else
			printf("%i%s", va_arg(ap, int), separator);
		i++;
	}
	va_end(ap);
}
