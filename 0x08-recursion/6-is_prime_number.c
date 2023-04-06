#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input value
 * Return: 1 if input is a prime number
 * else return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - checks if a number is a prime number
 * recursively
 * @n: input value
 * @i: input value
 * Return: 1 if n is prime, else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
