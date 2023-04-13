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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = (malloc(new_size));
	if (new_size <= old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
