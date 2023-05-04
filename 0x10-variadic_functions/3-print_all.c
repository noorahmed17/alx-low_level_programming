#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: function parameter
 * @...: variable of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	char *sep = "";
	int i = 0;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}

