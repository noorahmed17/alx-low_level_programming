#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
/* betty style doc for function main goes there */
/**
 * main - prints n and its last digit compare it to
 *        when its greater than 5, equal to 0, greater than 6 and not 0
 *
 * Return: 0 when no error
=======

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
>>>>>>> c4fe8a1a73c748b265b2e64cfaac6028f774cf88
 */
int main(void)
{
	int n;

<<<<<<< HEAD

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
=======
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);

>>>>>>> c4fe8a1a73c748b265b2e64cfaac6028f774cf88
}
