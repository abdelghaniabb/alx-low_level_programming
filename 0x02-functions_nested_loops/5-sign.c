#include "main.h"
#include <stdio.h>
/**
 * print_sign - chek code
 * @n: integer
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar('1');
	}
	else if (n == 0)
	{
		putchar('0');
		putchar('0');
	}
	else
	{
		putchar('-');
		putchar('1');
	}
}
