#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number
 * Return: void
 */
void print_times_table(int n)
{
	int i, k, p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (k = 0; k < n; k++)
			{
				p = k * i;
				printf("%i, ", p);
				if (i * (k +  1) < 10)
					printf(" ");
			}
			if (k == n)
			{
				p = k * i;
				printf("%i", p);
			}
			printf("\n");
		}
	}
}
