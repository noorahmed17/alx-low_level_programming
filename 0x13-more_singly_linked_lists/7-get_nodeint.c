#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node
 * @head: function parameter
 * @index: function parameter
 * Return: number of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
