#include "main.h"

/**
 *_memcpy - a function that copies memory area
 * The _memcpy() function copies n bytes from memory area src
 * to memory area dest
 *@dest: the destination memory
 *@src: the source memory
 *@n: number of bytes
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

