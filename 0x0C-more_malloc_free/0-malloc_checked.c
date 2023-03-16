#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - cc
 * @b: size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = (void *)malloc(b);

	if (ptr == NULL)
	{
		perror("malloc");
		exit(98);
	}
	return (ptr);
}
