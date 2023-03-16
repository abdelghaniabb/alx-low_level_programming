#include <stdlib.h> // needed for malloc function
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result = NULL;
    // check for zero arguments
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
    // allocate memory for the result array
	result = malloc(nmemb * size);

	if (result == NULL)
	{
		return (NULL);
	}
    // initialize the result array to zero
	memset(result, 0, nmemb * size);
	return (result);
}
