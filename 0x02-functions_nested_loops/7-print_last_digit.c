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

	r = a % 10;
	if (r <= 0)
		r = -1 * r;

	_putchar(r + '0');
	return (r);
}
