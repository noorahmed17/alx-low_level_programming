#include "main.h"
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: function paramter
 * @av: function parameter
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int l = 0;
	int i, j;
	int k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';
	}
	return (str);
}
