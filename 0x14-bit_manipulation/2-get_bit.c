#include "main.h"

/**
 * get_bit - get  the value of a bit at a given index
 * @n: the value
 * @index: the index of thee value to return
 * Return: the value in the index of n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
