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
	{	/*printf("%i", va_arg(ap, int));*/
		if (*separator == 0)
		{
			return; /*printf("%c", *separator);*/
		}
		else if (i != n - 1)
		{
			printf("%i", va_arg(ap, int));
			printf(" ");
			i++;
		}

}
	printf("\n");
}
