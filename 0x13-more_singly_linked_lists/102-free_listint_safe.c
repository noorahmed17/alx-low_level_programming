#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - free a liat
 * @h: function prameter
 * Return: void
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	size_t count = 0;

	if (h == NULL)
		return (0);
	curr = *h;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		count++;
		if (next >= curr)
			break;
		curr = next;
	}
	*h = NULL;
	return (count);
}
