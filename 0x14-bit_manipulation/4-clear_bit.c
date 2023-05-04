#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: function parameter
 * @index: function parameter
 * Return: 1 on succes, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
