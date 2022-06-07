/**
 * print_alphabet - Prints the alphabet
 * main - This is the intro to the program
 *
 * return: 0 (success).
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
