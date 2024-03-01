#include "shell.h"

/**
 * _erratoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 *       -1 on error
 */


int _erratoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (*s == '+') {
        s++;
    } else if (*s == '-') {
        sign = -1;
        s++;
    }

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            /*Verification if exceedance*/
            if ((INT_MAX - (s[i] - '0')) / 10 < result) {
                return -1; 
/* exceedance detected */
            }
            result = result * 10 + (s[i] - '0');
        } else {
            return -1; 
/* Chararcter invalid*/
        }
    }

    return result * sign;
}

