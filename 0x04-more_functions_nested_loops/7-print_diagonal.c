#include "main.h"
/**
 * print_line - print number of diaginal lines
 * @n: number of lines
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

