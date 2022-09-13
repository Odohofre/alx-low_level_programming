#include "maths.h"

int main()
{
	/* Variable declation */
	int firstNumber, secondNumber;
	int sum, difference, product, modulo;
	float quotient;

	/* Taking input from user and storing it in firstNumber and secondNumber */
	printf("Enter First Number: ");
	scanf("%d", &firstNumber);
	printf("Enter Second Number: ");
	scanf("%d", &secondNumber);

	/* Adding two numbers */
	sum = addition(firstNumber, secondNumber);

	/* Subtracting two numbers */
	difference = subtraction(firstNumber, secondNumber);

	/* Multiplying two numbers*/
	product = multiplication(firstNumber, secondNumber);

	/* Dividing two numbers */
	quotient = division(firstNumber, secondNumber);

	/* Remainder when firstNumber is divided by secondNumber*/
	modulo = mod(firstNumber, secondNumber);

	printf("\nSum = %d", sum);
	printf("\nDifference  = %d", difference);
	printf("\nMultiplication = %d", product);
	printf("\nDivision = %.3f", quotient);
	printf("\nRemainder = %d", modulo);

	return 0;
}
