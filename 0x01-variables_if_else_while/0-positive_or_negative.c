#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the beginning of the code
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%ld is positive", n);
	else if (n == 0)
		printf("%ld is zero", n);
	else
		printf("%ld is negative", n);
	return (0);
}
