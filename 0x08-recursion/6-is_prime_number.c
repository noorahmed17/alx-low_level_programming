#include "main.h"
/**
 * check_prime - check for prime numbers
 * @a: function parameter
 * @b: function parameter
 * Return: n
 */
int check_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);

	else if (a > b / 2)
		return (1);

	else
		return (check_prime(a + 1, b));
}
/**
 * is_prime_number - check for prime numbers
 * @n: function parameter
 * Return: n
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (check_prime(2, n));
}
