#include "main.h"

/**
 * _islower - show 1 if input is a lowercase character. Other cases show 0
 * @c: the character
 * Return: 1 for lowercase character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
