#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocale memory
 * @nmemb: nb elements
 * @size: size of array
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	result = malloc(nmemb * size);

	if (result == NULL)
	{
		return (NULL);
	}

	memset(result, 0, nmemb * size);
	return (result);
}
