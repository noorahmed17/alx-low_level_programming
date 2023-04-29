#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all elemnets of the list
 * @h: function parameter
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}

