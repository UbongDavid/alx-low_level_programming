#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A program that sums variable number of arguments
 * @n: fixed argument to supply the number of variable arguments provided
 * Return: The Sum of the arguments received
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;


	va_start(ap, n);

	while (i < n)
	{
		printf("%i", va_arg(ap, int));
		if (*separator && i != (n-1))
		{
			printf("%c", *separator);
		}
		printf(" ");
		i++;
	}
	printf("\n");
	return;
}
