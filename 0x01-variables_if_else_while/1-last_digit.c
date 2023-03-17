#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	}
	printf("\n");

	return (0);
}
