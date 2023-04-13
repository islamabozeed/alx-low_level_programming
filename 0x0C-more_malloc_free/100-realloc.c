#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - raeallocates func
 * @ptr: pointers
 * @old_size: int
 * @new_size: int
 * Return: zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int z;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (z = 0; z < new_size; z++)
			ptr1[z] = old_ptr[z];
	}

	if (new_size > old_size)
	{
		for (z = 0; z < old_size; z++)
			ptr1[z] = old_ptr[z];
	}

	free(ptr);
	return (ptr1);
}
