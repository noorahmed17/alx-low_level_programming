#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - search for an integer
 * @array: function parameter
 * @size: function parameter
 * @cmp: pointer to a function
 * Return: index if found, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
