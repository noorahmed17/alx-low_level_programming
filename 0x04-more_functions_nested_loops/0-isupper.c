#include "main.h"
/**
 * _isupper - check for uppercase
 * @c: function parameter
 * Return: 1 when upper and 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
