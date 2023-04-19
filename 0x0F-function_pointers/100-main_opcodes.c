#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: function parameter
 * @argv: function parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *((char*)main + i));
	}
	printf("\n");
	return (0);
}


