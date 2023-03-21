#include "main.h"
/**
 * _abs - checks for absolute value
 *
 * @n: parameter to be checked
 *
 * Return: Always n
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
