#include "main.h"
/**
 * print_square - print number of squares
 * @size: number of lines
 * Return: Always 0
 */
void print_square(int size)
{
	int i;
	int j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
