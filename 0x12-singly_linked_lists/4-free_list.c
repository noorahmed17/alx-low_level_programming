#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: function parameter
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
