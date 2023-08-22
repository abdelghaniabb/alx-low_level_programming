#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: the destination buffer
 * @src: the source pointer
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of the destination string */
	i = 0;
	while (dest[i] != '\0')
		i++;


	/* Copy the source string to the end of the destination string */
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}

