#include "shell.h"

/**
 * bfree - Free pointer and NULL address.
 * @ptr: pointer address to free
 * Return: 1 if pointer is freed, else 0
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
