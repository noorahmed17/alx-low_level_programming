#include "main.h"
/**
 * sqrt_helper - cal the square root
 * @b: function parameter
 * @a: function parameter
 * Return: n
 */
int sqrt_helper(int a, int b)
{
	if (a * a > b)
		return (-1);

	else if (a * a == b)
		return (a);

	return (sqrt_helper(a + 1, b));
}
/**
 * _sqrt_recursion - return natural square root of a number
 * @n: function parameter
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (sqrt_helper(1, n));
}
