#include <stdio.h>
/**
 * main - this is the beginning of the code
 *
 * Description: This prints out the alphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
			continue;
		if (ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
