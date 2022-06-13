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
 * rev_string - reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
	int i, n;
	char swt;

	i = 0;
	n = _strlen(s) - 1;

	while (i < n)
	{
		swt = s[i];
		s[i] = s[n];
		s[n] = swt;
		i++, n--;
	}
}
