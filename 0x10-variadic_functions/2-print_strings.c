#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: function parameter
 * @n: function parameter
 * @...: variables passed to function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s%s", s, separator);
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(args);
}

