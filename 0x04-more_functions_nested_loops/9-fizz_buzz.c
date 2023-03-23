#include <stdio.h>

/**
 * main - a function that prints number from 0-100 followed by a new line
 * for multiples of 3 print fizz instead of the number
 * for multiples of 5 print buzz instead of the number
 * for multiples of both 3 and 5 print fizzbuzz
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
