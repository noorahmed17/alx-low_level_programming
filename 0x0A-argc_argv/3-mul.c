#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argv: function parameter
 * @argc: function parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
