#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: function  parameter
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	_putchar('\n');
}
