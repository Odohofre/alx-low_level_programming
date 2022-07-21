#include "main.h"
/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{

	unsigned long int current;
	int i, len = 0;

	for (i = 63; i >= 0; i--)
	{
		current = n >> 1;

		if (current & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
		{
			_putchar('0');
		}
		if (!len)
			_putchar('0');
	}
}
