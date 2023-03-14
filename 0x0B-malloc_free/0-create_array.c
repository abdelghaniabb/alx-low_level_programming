#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size of the array
 * @c: the char
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL && size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
