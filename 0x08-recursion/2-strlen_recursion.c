#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: function parameter
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
	{
		return ((1) + _strlen_recursion(s + 1));
	}
}
