#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	long int num2, num3, sum, next;

	num2 = 1;
	num3 = 2;
	sum = 0;

	for (num = 1; num <= 33; ++num)
	{
		if (num2 < 4000000 && (num2 % 2) == 0)
			sum = sum + num2;
		next = num2 + num3;
		num2 = num3;
		num3 = next;
	}

	printf("%ld\n", sum);

	return (0);
}
