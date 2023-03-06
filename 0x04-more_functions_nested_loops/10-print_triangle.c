#include <stdio.h>
/**
 * print_triangle - check code
 * @size: var
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, j;

	while (i <= size && size > 0)
	{
		j = 1;
		while (j <= size - i)
		{
			putchar(' ');
			j++;
		}
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
