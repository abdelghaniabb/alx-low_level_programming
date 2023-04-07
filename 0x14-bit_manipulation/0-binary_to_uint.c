#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - from binary to disimal
 * @b: the string of char  of binary
 * Return:  unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	int i;
	unsigned int res;

	if (b == NULL)
		return (0);

	n = strlen(b);
	i = 0;
	res = 0;

	while (i < n)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			res = res + _pow(2, n - 1 - i);

		i++;
	}

	return (res);
}

/**
 * _pow - chek code
 * @x: base
 * @y: puissance
 * Return: x^y
 */

int _pow(int x, int y)
{
	int res = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		res = x * _pow(x, y - 1);
		return (res);
	}
	else
	{
		return (res);
	}
}
