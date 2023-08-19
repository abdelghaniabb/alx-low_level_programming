#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */
void times_table(void)
{
	int i, k, p;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 9; k++)
		{
			p = k * i;
			printf("%i, ", p);
			if (p < 10)
				printf(" ");
		}
		if (k == 9)
		{
			p = k * i;
			printf("%i", p);
		}
		printf("\n");
	}
}

