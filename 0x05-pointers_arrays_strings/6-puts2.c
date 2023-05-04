#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: function parameter
 * Return: Always 0
 */
void puts2(char *str)
{
	int l = 0;
	char *p = str;
	int t = 0;
	int i;

	while (*p != '\0')
	{
		p++;
		l++;
	}
	t = l - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
