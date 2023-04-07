#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: function parameter
 * Return: Always i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

