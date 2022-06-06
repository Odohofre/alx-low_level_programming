#include <stdio.h>
/**
 * main - This is the beginning of the code
 *
 * Description: This prints out numbers in base16
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
