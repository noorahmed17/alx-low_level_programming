#include "main.h"
/**
 * print_line - print number of lines
 * @n: number of lines
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
