#include "maths.h"
/*
* Function to add two numbers
*/
int addition(int num1, int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}
/*
* Function to subtract two numbers
*/
int subtraction(int num1, int num2){
    int difference;
    difference = num1 - num2;
    return difference;
}

/*
* Function to multiply two numbers
*/
int multiplication(int num1, int num2){
    int product;
    product = num1 * num2;
    return product;
}

/*
* Function to divide two numbers
*/
float division(int num1, int num2){
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