#include "main.h"
/**
 * _memset - fills memory with bytes
 * @s: function parameter
 * @b: function parameter
 * @n: function parameter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
