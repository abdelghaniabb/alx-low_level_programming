#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - check code
 * Return: 0
 */
void jack_bauer(void)
{
int h, m;
h = 0;
while (h < 24)
{
	m = 0;
	while (m < 60)
	{
		printf("%02d:%02d\n", h, m);
		m++;
	}
	h++;
}
}
