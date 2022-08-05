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
	/*va_list ap;*/
	unsigned int i = 0;
	va_list ap;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	while (i < n)
	{
		printf("%i", va_arg(ap, int));
		if (i < (n - 1)) /* i = 0 1 2 3 => 4 iterations */
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
