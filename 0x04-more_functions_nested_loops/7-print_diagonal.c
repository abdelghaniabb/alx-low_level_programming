#include <stdio.h>
/**
 * print_diagonal - check code
 * @n: var
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 1, j;

	while (i <= n && n > 0)
	{
		j = 1;
		while (j < i)
		{
			putchar(' ');
			j++;
		}
		putchar('\\');
		putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
