#include <stdio.h>
/**
 * main - This is the intro to the function
 *
 * Description: This prints out numbers from 0 to 9 seperated by spaces & comma
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
