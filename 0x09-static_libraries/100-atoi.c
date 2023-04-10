#include "main.h"

/**
 * _atoi - converts strings to integer
 * @s: onput value
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int j = 0;
	unsigned int res = 0;

	while (!(s[j] <= '9' && s[j] >= '0' && s[j] != '\0'))
	{
		if (s[j] == '-')
			sign *= -1;
		j++;
	}
	res *= sign;
	return (res);
}

