<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
=======
#include<stdio.h>
/**
 * main - is main function
 *
 * Return: 0 when no error
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
>>>>>>> 6ec5f8d014580d660de3fa3bed571bd7133b2a92
	}
	putchar('\n');
	return (0);
}
