#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: input value
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1;
	int printed = 0;

	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
		i--;
	}
	if (!printed)
	{
		_putchar('0');
	}
}
