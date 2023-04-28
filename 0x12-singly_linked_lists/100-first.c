#include <stdio.h>

void print_quote(void) __attribute__ ((constructor));

/**
 * print_quote - prints quote
 * Return: 0
 */
void print_quote(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
