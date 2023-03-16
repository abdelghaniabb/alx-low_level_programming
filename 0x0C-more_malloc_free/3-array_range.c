#include <stdlib.h>
/**
 * array_range - make an aray
 * @min: the min value of the array
 * @max: the last value of the array
 * Return: result
 */
int *array_range(int min, int max)
{
	int *result = NULL;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	result = malloc(sizeof(int) * size);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		result[i] = min + i;
	}
	return (result);
}
