#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: function parameter
 * @n: function parameter
 * @...: variables that will be taken
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		else
		{
			printf("%d", va_arg(args, int));
		}
	}
	printf("\n");
	va_end(args);
}
