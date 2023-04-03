#include "main.h"
/**
 *_strchr - locate a character in a string
 *@s: function parameter
 *@c: function parameter
 *Return: s if found, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
