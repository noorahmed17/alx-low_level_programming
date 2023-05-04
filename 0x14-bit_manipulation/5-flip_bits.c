#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: function parameter
 * @m: function parameter
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int num;
	int i, count = 0;

	if (i = 63; i >= 0; i--)
	{
		num = result >> i;
		if (num & 1)
			count++;
	}
	return (count);
}
