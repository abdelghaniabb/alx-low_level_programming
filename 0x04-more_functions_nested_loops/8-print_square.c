#include <stdio.h>
/**
 * print_square - check code
 * @size: var
 * Return: void
 */
void print_square(int size)
{
	int i = 1, j;

	while (i <= size && size > 0)
	{
		j = 1;
		while (j <= size)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
