#include <stdio.h>
/**
 * print_numbers - check code
 * Return: void
 */

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	printf("\n");
}
