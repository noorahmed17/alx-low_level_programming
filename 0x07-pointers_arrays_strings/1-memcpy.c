#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: function parameter
 *@src: function parameter
 *@n: function parameter
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d;
	char *s;

	d = dest;
	s = src;
	while (n-- > 0)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
