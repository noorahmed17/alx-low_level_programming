#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - return sum of nodes
 * @head: function parameter
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}

