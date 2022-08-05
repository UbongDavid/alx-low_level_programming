#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A program that sums variable number of arguments
 * @n: fixed argument to supply the number of variable arguments provided
 * Return: The Sum of the arguments received
 */

int sum_them_all(const unsigned int n, ...)
{
	/*va_list ap;*/
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
