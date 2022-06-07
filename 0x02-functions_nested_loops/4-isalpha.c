#include "main.h"
/**
 * _isalpha - check if c is a letter, lowercase or uppercase
 * @c: What is checked
 *
 * Return: 1 (success), otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
