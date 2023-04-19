#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: functuion parameter
 * @argv: function parameter
 * Return: resuly
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op_fun = get_op_func(argv[2]);
	num2 = atoi(argv[3]);
	if (!op_fun)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_fun(num1, num2);
	printf("%d\n", result);
	return (0);
}

