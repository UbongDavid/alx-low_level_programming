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
	char *lilBuffer = "";

	va_start(ap, n);

	while (i < n)
	{
		lilBuffer = va_arg(ap, char *);
		if (separator == NULL)
		{
			separator = "";
		}
		if (lilBuffer == NULL)
		{
			lilBuffer = "(nil)";
		}
		printf("%s", lilBuffer);
		if (i < (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
