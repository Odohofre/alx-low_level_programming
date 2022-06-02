#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char letterType;
	int numType;
	long longType;
	long long longlongType;
	float deciType;

	printf("Size of a char: %ld byte(s)\n", sizeof(letterType));
	printf("Size of an int: %ld byte(s)\n", sizeof(numType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %ld byte(s)\n", sizeof(deciType));

	return (0);
}
