#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @a: an int
 * Return: the last digit
 */
int print_last_digit(int a)
{
	int r;

	if (a <= 0)
		a = -1 * a;

	r = a % 10;
	putchar('0' + r);
	return (r);
}
