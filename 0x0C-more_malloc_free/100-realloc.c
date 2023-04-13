#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _realloc -  reallocates a memory block
 * @ptr: function parameter
 * @old_size: function parameter
 * @new_size: function parameter
 * Return: new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size <= old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
