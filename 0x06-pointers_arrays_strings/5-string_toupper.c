#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @n: string
 * Return: strings in uppercase.
 */
char *string_toupper(char *n)
{
	for (int i = 0; n[i] != '\0'; i++)
	{
		if (('a' <= n[i]) && (n[i] <= 'z'))
			n[i] = 'A' + (n[i] - 'a');
	}
	return (n);
}
