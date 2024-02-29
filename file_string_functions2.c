#include² "shell.h"

/**
 * _strcpy - copy a string
 * @destin: destination
 * @sourc:  source
 * Return: pointer to destination
 */
char *_strcpy(char *destin, char *sourc)
{
	int i = 0;

	if (destin == sourc || sourc == 0)
		return (destin);
	while (sourc[i])
	{
		destin[i] = sourc[i];
		i++;
	}
	destin[i] = 0;
	return (destin);
}

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *retur;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	retur = malloc(sizeof(char) * (length + 1));
	if (!retur)
		return (NULL);
	for (length++; length--;)
		retur[length] = *--str;
	return (retur);
}

/**
 *_puts - prints an input string
 *@str: the string to be printed
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	if (str == NULL)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: On success 1.
 * On error, -1 is returned
 * errno is set appropriately.
 */
int _putchar(char c)
{
	static int index;
	static char buffer[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || index >= WRITE_BUF_SIZE)
	{
		write(1, buffer, index);
		index = 0;
	}
	if (c != BUF_FLUSH)
		buffer[index++] = c;
	return (1);
}

