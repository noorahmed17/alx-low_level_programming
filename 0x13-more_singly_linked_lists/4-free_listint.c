#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free a list
 * @head: function parameter
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
