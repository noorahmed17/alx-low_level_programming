#include "main.h"
/**
 * _strlen - print length of string
 * @s: function parameter
 * Return: length
 */
int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}
/**
 * check - check for palindrome
 * @s: function parameter
 * @i: function parameter
 * @j: function parameter
 * Return: 1 if palondrome, 0 otherwise
 */
int check(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
			return (1);
		else
			return (check(s, i + 1, j - 1));
	}
	else
		return (0);
}
/**
 * is_palindrome - check if palindrome
 * @s: function parameter
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (check(s, 0, _strlen(s) - 1));
}
