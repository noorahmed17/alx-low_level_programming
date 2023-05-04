#include <stdio.h>
#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: function parameter
 * @index: function parameter
 * Return: -1 if fail, 1 on succes
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return  (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
