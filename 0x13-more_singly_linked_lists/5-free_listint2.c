#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees alist
 * @head: function parameter
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
