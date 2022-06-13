#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: String
 */
void print_rev(char *s)
{
	int i, n;

	n = _strlen(s);

	for (i = n; i > 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
