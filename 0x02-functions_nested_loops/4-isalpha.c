#include "main.h"
#include <stdio.h>
/**
 * _isalpha - chek code
 * @c: integer
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
