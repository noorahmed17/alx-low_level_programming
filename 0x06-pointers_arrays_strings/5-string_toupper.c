#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	char *p = n;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}
	return (n);
}
