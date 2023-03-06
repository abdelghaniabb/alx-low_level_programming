#include <stdio.h>
/**
 * print_line - check code
 * @n: var
 * Return: void
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n && n > 0)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
