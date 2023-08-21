#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - check the code
 * @dest: var1
 * @src: var2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of the destination string */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

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

