#include "main.h"
/**
 * print_triangle - function that print a traingle, followed by a new line
 * @size: number of triangles
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
			_putchar(' ');
		
		for (j = 1; j <= i; j++)
			_putchar('#');
		
		_putchar('\n');
	}
}
