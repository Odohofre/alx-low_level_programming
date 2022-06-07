#include "main.h"
/**
 * main - Intro to the function
 *
 * Return: 0 (success).
 */
int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - Prints the alphabet
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
