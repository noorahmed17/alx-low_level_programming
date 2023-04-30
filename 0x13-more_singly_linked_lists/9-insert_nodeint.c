#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given index
 * @head: function parameter
 * @idx: function parameter
 * @n: functio parameter
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;
	if (current == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = current->next;
	current->next = node;
	return (node);
}
