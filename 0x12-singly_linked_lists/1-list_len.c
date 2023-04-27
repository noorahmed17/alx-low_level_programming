#include "lists.h"
#include <stdio.h>
/**
 * list_len - return number of elements
 * @h: function parameter
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
