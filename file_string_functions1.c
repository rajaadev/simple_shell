#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @st: the string whose length to check
 *
 * Return: integer length of string @st
 */
int _strlen(char *st)
{
	int i = 0;

	if (st == NULL)
		return (0);

	while (*st++)
		i++;
	return (i);
}

/**
 * _strcmp - realize lexicographic comparison of two strings @st1 and @st2.
 * @st1: the first string
 * @st2: the second string
 *
 * Return: negative if st1 < st2, positive if st1 > st2, zero if st1 == st2
 */
int _strcmp(char *st1, char *st2)
{
	while (*st1 && *st2)
	{
		if (*st1 != *st2)
			return (*st1 - *st2);
		st1++;
		st2++;
	}
	if (*st1 == *st2)
		return (0);
	else
		return (*st1 < *st2 ? -1 : 1);
}

/**
 * starts_with - checks if full_st starts with start_st
 * @full_st: string to search in
 * @start_st: the substring to find
 *
 * Return: address pointer of next char of full_st after start_st or NULL
 */
char *starts_with(const char *full_st, const char *start_st)
{
	while (*start_st)
		if (*start_st++ != *full_st++)
			return (NULL);
	return ((const char *)full_st);
}

/**
 * _strcat - concatenates two strings
 * @destin: the destination buffer
 * @sourc: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *destin, char *sourc)
{
	char *ret_strcat = destin;

	while (*destin)
		destin++;
	while (*sourc)
		*destin++ = *sourc++;
	*destin = '\0';
	return (ret_strcat);
}
