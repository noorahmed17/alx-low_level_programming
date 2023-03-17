#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints n and its last digit compare it to
 *        when its greater than 5, equal to 0, greater than 6 and not 0
 *
 * Return: 0 when no error
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int a = n % 10;

	if (a > 5)
	{
	        printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else if (a < 6 && a != 0)
	{
	        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
