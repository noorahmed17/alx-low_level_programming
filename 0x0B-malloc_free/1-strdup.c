#include "main.h"
/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: function parameter
 * Return: new_str
 */
char *_strdup(char *str)
{
	unsigned int l = 0;
	unsigned int i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	new_str = (char *) malloc((l + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		new_str[i] = str[i];
	new_str[l] = '\0';
	return (new_str);
}

