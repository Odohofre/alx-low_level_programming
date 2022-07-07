#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: parameters
 * Return: Sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	/* Declaring pointer to the argument list */
	va_list ptr;

	if (n == 0)
		return (0);

	/* Initializing argument to the list pointer */
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
