#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size
 * @new_size: the new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *oldp;
	unsigned int i;
	
	if (ptr != NULL)
	{
		p = ptr;
	}
	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	oldp = malloc(new_size);
	if (oldp == NULL)
	{
		return (0);
	}

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = clone[i];
	}
	free(ptr);
	return (oldp);
}
