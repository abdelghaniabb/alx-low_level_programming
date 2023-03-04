#include "main.h"
#include <stdio.h>
/**
 * _islower - chek code
 * @c: integer
 * Return: 1 or 0
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			printf("%d", 1);
			break;
		}
	}
	if (c != i)
	{
		printf("%d", 0);
	}
	return (void);
}
