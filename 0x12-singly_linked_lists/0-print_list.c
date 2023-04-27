#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - print all elements of a list
 * @h: function parameter
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nill)");
		h = h->next;
		count++;
	}
	return (count);
}
