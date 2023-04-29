#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return number of elements
 * @h: function parameter
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t len = 0;

	while (current)
	{
		len++;
		current = current->next;
	}
	return (len);
}
