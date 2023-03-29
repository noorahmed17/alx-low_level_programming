#include <stdio.h>
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	int a[5];
	int *p;

	p = &a[0];
	p++;
	 /**
	  * write your line of code here...
	  * Remember:
	  * - you are not allowed to code anything else than this line of code
	  * - you are not allowed
	  */
	*(p + 5) = 98;
	printf("a[2] = %d\n", *(p + 1));
	/* ...so that this prints 98\n */
	return (0);
}
