#include "main.h"
/**
 * _puts - print a string, foolwed by new line
 * @str: fuunction parameter
 * Return : Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

