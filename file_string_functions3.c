#include "shell.h"

char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_strchr(char *, char);
***
/**
 * _strncpy - copy a string
 * @dest: Destination
 * @src: Source string
 * @n: number of characters to copy

 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return dest;
}
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: Destination
 * @src: Source
 * @n: number of characters to concatenate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;


while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

/**
 * _strchr - Function that locate character in string
 * @str: string to search
 * @c: character to find
 * Return: point the first occurrence of the character c in the string
 * 	or NULL if the character is not found
 */
char *_strchr(char *str, char c)
{
int i = 0;
/*read the string include NULL */
while (str[i] != '\0')
    {
/* verify if the character c is in string */
   if (str[i] == c)
            return &str[i];
        i++;
    }
/* if c not founded in str*/

return NULL;
}

