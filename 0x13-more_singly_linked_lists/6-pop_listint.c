#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: fnction parameter
 * Return: node
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *node = *head;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (value);
}
