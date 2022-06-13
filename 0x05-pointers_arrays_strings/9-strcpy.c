#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: destination string
 * @src: source string
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
