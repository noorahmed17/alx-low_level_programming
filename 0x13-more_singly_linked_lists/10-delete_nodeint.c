#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: function parameter
 * @index: function paramter
 * Return: 1 if sucess, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	prev = *head;
	node = (*head)->next;

	for (i = 1; i < index && node != NULL; i++)
	{
		prev = node;
		node = node->next;
	}
	if (node == NULL)
		return (-1);
	prev->next = node->next;
	free(node);
	return (1);
}
