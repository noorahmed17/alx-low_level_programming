#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: function parameter
 * @s2: function prameter
 * @n: function parameter
 * Return: s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;

	if (*s1 == NULL)
		s1 = "";
	if (*s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	s3 = malloc(len1 + n + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < lene1; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
