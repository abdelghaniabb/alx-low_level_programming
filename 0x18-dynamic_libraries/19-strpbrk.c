#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * The _strpbrk() function locates the first occurrence in
 * the string s of any of the bytes in the string accept
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}

