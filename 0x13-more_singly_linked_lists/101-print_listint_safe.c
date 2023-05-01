#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - print a linked list
 * @head: function parameter
 * Return: void
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s, *f;
	size_t count = 0;

	if (head == NULL)
		return (0);

	s = head;
	f = head->next;

	while (f != NULL && f < s)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		count++;
		s = s->next;
		f = f->next;
	}
	printf("[%p] %d\n", (void *)s, s->n);
	count++;
	if (f != NULL)
	{
		printf("-> [%p] %d\n", (void *)f, f->n);
		exit(98);
	}
	return (count);
}
