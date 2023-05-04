#include "main.h"
/**
 * _strpbrk - search for any set of bytes
 * @s: function parameter
 * @accept: function parameter
 * Return: ponter to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
