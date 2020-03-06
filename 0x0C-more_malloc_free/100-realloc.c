#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates block of memory with malloc and free
 * @ptr: pointer to memory previously allocated
 *
 * @old_size: size in bytes of previously allocated memory
 *
 * @new_size: size in bytes of new memory block
 *
 * Return: void pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *holder;
	char *transfer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	holder = (char *)ptr;
	transfer = malloc(sizeof(char) * new_size);
	if (transfer == NULL)
		return (NULL);
	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
			transfer[i] = holder[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			transfer[i] = holder[i];
	}
	free(ptr);
	return (transfer);
}
