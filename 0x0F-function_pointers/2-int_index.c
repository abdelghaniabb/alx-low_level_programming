#include <stdlib.h>
/**
 * int_index - index of array
 * @array: array of int
 * @size: len of the array
 * @cmp: comparation function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
