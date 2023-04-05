#include "main.h"
/**
 * check - check if identical
 * @s1: function parameter
 * @s2: function parameter
 * @i: function parameter
 * @j: function parameter
 * Return: n
 */
int check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (check(s1, s2, i + 1, j) || check(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if identical
 * @s1: function parameter
 * @s2: function parameter
 * Return: n
 */
int wildcmp(char *s1, char *s2)
{
	return (check(s1, s2, 0, 0));
}
