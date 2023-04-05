#include "main.h"
/**
 * sqrt_helper - cal the square root
 * @n: function parameter
 * @start: function parameter
 * @end: function parameter
 * Return: n
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (end < start)
		return (-1);

	if (mid * mid == n)
		return (mid);

	else if (mid * mid > n)
		return (sqrt_helper(n, start, mid - 1));

	else
		return (sqrt_helper(n, mid + 1, end));
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
		return (sqrt_helper(n, 1, n));
}
