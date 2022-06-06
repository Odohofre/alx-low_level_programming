#include <stdio.h>
/**
 * main - This is the intro to the function
 *
 * Description: This prints out three combinations of numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;
			putchar(',');
			puchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
