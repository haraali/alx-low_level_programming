#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: input value
 * @max: input value
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
