#include "main.h"
/**
 * get_endianness - check code
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;

	if (*(char *)&i)
		return (1);
	else
		return (0);
}
