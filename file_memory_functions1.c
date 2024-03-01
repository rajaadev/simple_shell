#include "shell.h"

/**
 * f_free - frees a string of strings
 * @pp: strings's string
 */
void f_free(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous malloc allocated block
 * @old_size: byte size of old block
 * @new_size: byte size of new block
 * Return: pointer
 */
void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	char *p;

	if (!ptr)
		return malloc(new_size);
	if ( new_size == 0)
	{
		free(ptr);
		return NULL);
	}
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	size_t copy_size = old_size < new_size ? old_size : new_size;
	for (size_t i = 0; i < copy_size; i++)

		p[i] = ((char *)ptr)[i];

	free(ptr);
	return (p);
}

/**
 **memory_set - fills memory with a constant byte
 *@s:  pointer to the memory area
 *@b:  byte to fill *s
 *@n: numbers of bytes to be filled
 *Return: pointer to the memory area s
 */
char *memory_set(char *s, char b, size_t n)
{
        size_t i;

        for (i = 0; i < n; i++)
                s[i] = b;
        return s;
}
