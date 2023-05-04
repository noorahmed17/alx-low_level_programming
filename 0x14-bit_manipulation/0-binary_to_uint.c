#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: function parameter
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i;
	unsigned int len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != 1 && b[i] != '0')
			return (0);
		result = (result << 1) + (b[i] - '0');
	}
	return (result);
}


