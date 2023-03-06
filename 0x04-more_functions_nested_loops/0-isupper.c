#include "main.h"
#include <stdio.h>
/**
 * _isupper - check code
 * @c: var
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int i = 'A';

	while (i <= 'Z')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	if (c != i)
	{
		return (0);
	}
}
