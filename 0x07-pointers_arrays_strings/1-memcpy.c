#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @n: number of bytes
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
