#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ptr;

	if (n > 0)
	{
		va_start(ptr, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if ((i != n) && (separator != NULL))
				printf("%s", separator);
		}
		va_end(ptr);
	}
	printf("\n");
}
