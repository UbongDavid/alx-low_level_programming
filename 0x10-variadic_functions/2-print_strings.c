#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints its string optional arguments
 * @separator: Specifies the delimiter
 * @n: Specifies the number of optional arguments
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
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
		/*lilBuffer = (va_arg(ap, int) == 0) ? *nil : va_arg(ap, int)*/
		if (i == (n - 1))
			printf("%s\n", *va_arg(ap, int));
		else if (*separator == 0)
			printf("%snill", *va_arg(ap, int));
		else
			printf("%s%s", *va_arg(ap, int), separator);
		i++;
	}
va_end(ap);
}
