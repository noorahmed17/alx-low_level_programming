#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: function parameter
 * @c: function parameter
 * Return: arary
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *) malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
