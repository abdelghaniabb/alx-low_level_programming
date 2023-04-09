#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	if (n == 0)
	{
		printf("0\n");
		return;
	}

	while ((n & mask) == 0)
	{
	mask >>= 1;
	}

	while (mask != 0)
	{
		if ((n & mask) != 0)
			printf("1");
		else
			printf("0");
		mask >>= 1;
	}
}
