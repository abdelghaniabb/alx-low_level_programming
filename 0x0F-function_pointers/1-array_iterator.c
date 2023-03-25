#include <stdlib.h>
/**
 * array_iterator - print a number
 * @array: array of numbers
 * @size: len of array
 * @action: function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
