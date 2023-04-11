#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: input value
 * Return: 0
 */
char *_strdup(char *str)
{
	char *iii;
	int a;
	int b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	iii = malloc(sizeof(char) * (a + 1));
	if (iii == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		iii[b] = str[b];
	return (iii);
}
