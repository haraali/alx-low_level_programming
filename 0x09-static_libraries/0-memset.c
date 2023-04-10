#include "main.h"

/**
 * _memset - fills the first n bytes
 * @b: the desired value
 * @n: number of bytes to be changed
 * @s: starting to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
