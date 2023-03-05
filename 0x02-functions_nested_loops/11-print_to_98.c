#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check code
 * @n: var
 * Return: a+b
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);
	}
}
