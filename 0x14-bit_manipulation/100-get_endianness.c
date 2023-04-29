#include "main.h"
/**
 * get_endianness - check code
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
