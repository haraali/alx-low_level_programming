#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: c is uppercase
 * Return: returns 1 if c is uppercase. Else returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
