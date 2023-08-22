#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the destination buffer
 * @src: the source pointer
 * @n: number of bytes that shoud be taken from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the end of the destination string */
	i = 0;
	while (dest[i] != '\0')
		i++;


	/* Copy the source string to the end of the destination string */
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the terminating null byte */

	return (dest);
}

