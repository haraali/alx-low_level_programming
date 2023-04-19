#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition of two numbers
 * @a: number 1
 * @b: number 2
 * Return: sum of number 1 and number 2
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two numbers
 * @a: number 1
 * @b: number 2
 * Return: difference of number 1 and number 2
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two number
 * @a: number 1
 * @b: number 2
 * Return: product of number 1 and number 2
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: number 1
 * @b: number 2
 * Return: division of number 1 and number 2
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of two numbers
 * @a: number 1
 * @b: number 2
 * Return: remainder of number 1 and number 2
 */
int op_mod(int a, int b)
{
	return (a % b);
}
