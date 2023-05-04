#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: function parameter
 * Return: n
 */
int factorial(int n)
{
	int fact;

	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
