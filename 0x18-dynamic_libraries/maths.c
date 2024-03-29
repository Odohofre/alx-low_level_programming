#include "maths.h"

int main()
{
	/* Variable declation */
	int firstNumber, secondNumber;
	int sum, difference, product, modul;
	float quotient;

	/* Taking input from user and storing it in firstNumber and secondNumber */
	printf("Enter First Number: ");
	scanf("%d", &firstNumber);
	printf("Enter Second Number: ");
	scanf("%d", &secondNumber);

	/* Adding two numbers */
	sum = add(firstNumber, secondNumber);

	/* Subtracting two numbers */
	difference = sub(firstNumber, secondNumber);

	/* Multiplying two numbers*/
	product = mul(firstNumber, secondNumber);

	/* Dividing two numbers */
	quotient = div(firstNumber, secondNumber);

	/* Remainder when firstNumber is divided by secondNumber*/
	modul = mod(firstNumber, secondNumber);

	printf("\nSum = %d", sum);
	printf("\nDifference  = %d", difference);
	printf("\nMultiplication = %d", product);
	printf("\nDivision = %.3f", quotient);
	printf("\nRemainder = %d", modul);

	return 0;
}

/*
* Function to add two numbers
*/
int add(int num1, int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}
/*
* Function to subtract two numbers
*/
int sub(int num1, int num2){
    int difference;
    difference = num1 - num2;
    return difference;
}

/*
* Function to multiply two numbers
*/
int mul(int num1, int num2){
    int product;
    product = num1 * num2;
    return product;
}

/*
* Function to divide two numbers
*/
float div(int num1, int num2){
    float quotient;
    quotient = (float)num1 / num2;
    return quotient;
}

/*
 * Function to return remainder when one
 * number is divided by other number
 */
int mod(int num1, int num2){
    int modulo;
    modulo = num1 % num2;
    return modulo;
}
