#include "main.h"
/**
 * _isalpha - function check for alphabet
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is an alphabet
 * and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 9));
}
