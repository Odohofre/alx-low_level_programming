#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the integer
 * Return: 0 (success)
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
