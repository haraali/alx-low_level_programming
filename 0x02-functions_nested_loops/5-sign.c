#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: sign of a number
 * Return: 1 if number is greater than zero. 0 if number  zero
 * -1 if n is less than n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
