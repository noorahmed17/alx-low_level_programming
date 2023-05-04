#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: function parameter
 * @str: function parameter
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current;

	if (head == NULL || str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
