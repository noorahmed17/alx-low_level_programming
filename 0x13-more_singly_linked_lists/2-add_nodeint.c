#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add new node at beginning of the list
 * @head: function parameter
 * @n: function parameter
 * Return: newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
