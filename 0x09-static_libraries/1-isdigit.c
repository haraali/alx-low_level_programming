#include "main.h"

/**
 * _isdigit - function that checks for digit
 * @c: is a digit
 * Return: returns 1 if c is a digit. Else 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
