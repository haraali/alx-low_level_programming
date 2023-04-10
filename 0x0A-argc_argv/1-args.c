#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 * @argc: input value
 * @argv: input value
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore*/

	printf("%d\n", argc - 1);
	return (0);
}
