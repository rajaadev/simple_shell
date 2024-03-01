#include "shell.h"

/**
 * my_free - function that frees a pointer and puts address NULLS.
 * @ptr: address of the pointer to free.
 * Return: 1 if freed and 0 otherwise.
 */
int my_free(void **ptr)
{
	if (*ptr != NULL && ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
