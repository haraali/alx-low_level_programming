#include <stdio.h>
#include "main.h"

/**
 * _atoi - a string to int
 * @s: input value
 * Return: int converted
 */
int _atoi(char *s)
{
	int a;
	int b;
	int c;
	int len;
	int d;
	int digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
/**
 * main - program that multiplies two numbers
 * @argc: input value
 * @argv: input value
 * Return: 1 error 0 if not
 */
int main(int argc, char *argv[])
{
	int result;
	int num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
