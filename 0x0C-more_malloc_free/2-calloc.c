#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: input value
 * @b: input value
 * @n: input value
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: input value
 * @size: input value
 * Return: nmemb or size is 0, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
