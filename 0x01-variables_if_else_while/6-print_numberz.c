#include <stdio.h>
/**
 * main - Thi is the intro to the function
 *
 * Description: This prints out numbers from 0 to 9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
