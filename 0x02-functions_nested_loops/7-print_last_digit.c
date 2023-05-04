#include "main.h"
/**
 * print_last_digit - function that print the kast digit
 *
 * @n: function parameter
 *
 * Return: Always last
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}

