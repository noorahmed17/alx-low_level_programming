#include <main.h>
/**
 * main - the main function
 *
 * Return: 0 when no error
 */
int main(void)
{
	char ch[9] = "_putchar";

	for (int i = 0; i < 9; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
