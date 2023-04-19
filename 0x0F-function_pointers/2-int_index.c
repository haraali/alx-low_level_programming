#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: input value
 * @cmp: input value
 * @array: input value
 * Return: If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
