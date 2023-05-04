#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: function parameter
 * @s2: function parameter
 * Return: s3
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i;
	unsigned int j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	s3 = (char *) malloc((l1 + l2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		s3[i] = s1[i];
	for (j = 0; j < l2; j++)
		s3[l1 + j] = s2[j];
	s3[l1 + l2] = '\0';
	return (s3);
}
