#include "shell.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if any numbers in string  and otherwise converted number.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, output = 0;
	/* no spaces */
	while (s[i] == ' ' || s[i] == '\t')
	i++;
	/* optional sign*/
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	/* digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		output = output * 10 + (s[i] - '0');
		i++;
	}
	/* sign */
	return (sign * output);
}

/**
 * is_delim - checks if character is a delimiter
 * @c: the character to check
 * @delim: the delimiter string
 * Return: 0 if false and not found and 1 if true.
 */

int is_delim(char c, char *delim)
{
	while (*delim)
	{
	/* the character matches the delimiter */
	if (*delim == c)
	{
	return (1);
	}
	delim++;
	}
	return (0);
}

/**
 * interactive - returns true if shell is in interactive mode
 * @info: pointer to struct containing shell information
 * Return: 1 if interactive mode and 0 otherwise.
 */
int interactive(info_t *info)
{
/**
 *  Check if the standard input is a terminal and
 * if the read file descriptor is less than or equal to 2
 */
	return (isatty(STDIN_FILENO) && (info->readfd <= 2));
}
/**
 *_isalpha - function that checks for alphabetic character
 *@c: The character
 *Return: 1 if character is alphabetic and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

