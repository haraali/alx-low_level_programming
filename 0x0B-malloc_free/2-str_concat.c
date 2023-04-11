#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: input value
 * @s2: input value
 * Return: concatenation of the two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0;
	int j = 0;

	int len0 = 0;
	int len1 = 0;

	while (s1 && s1[len0])
		len0++;
	while (s2 && s2[len1])
		len1++;
	s3 = malloc(sizeof(char) * (len0 + len1 + 1));

	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len0)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len0 + len1))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
