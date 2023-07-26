#include "shell.h"

/**
 * _memset - Fills memory with a constant value or byte
 * @s: points to memory area
 * @b: points to the byte to fill *s with
 * @n: points to the amount of bytes to be filled
 * Return: (s)  pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - Function frees a string of strings.
 * @pp: string of strings address
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - Reallocate block of memory.
 * @ptr: previous malloc block pointer
 * @old_size: points to byte size of previous block
 * @new_size: points to byte size of new block
 * Return: pointer to old block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
