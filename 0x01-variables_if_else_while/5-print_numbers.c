#include <stdio.h>
/**
 * main - This is the intro to the function
 *
 * Description: This prints out numbers from 0 to 9
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
