#include "shell.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: the byte to fill *s with
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees an array of strings
 * @arr: pointer to array of strings
 */
void ffree(char **arr)
{
	char **tmp = arr;

	if (!arr)
		return;

	while (*arr)
		free(*arr++);

	free(tmp);
}

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to the previous malloc'ated block
 * @old_size: byte size of the previous block
 * @new_size: byte size of the new block
 *
 * Return: pointer to the old block if successful, NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
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

