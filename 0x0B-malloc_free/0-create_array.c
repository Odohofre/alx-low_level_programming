#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size input
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);

	if (size == 0 || ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
