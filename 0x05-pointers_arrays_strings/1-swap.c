#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: function parameter
 * @b: function parameter
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
