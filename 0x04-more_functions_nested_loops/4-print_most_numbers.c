#include <stdio.h>
/**
 * print_most_numbers - chek code
 * Return: voiid
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i < '9')
	{
		if (i != '2' && i != '4')
		{
			putchar(i);
		}
		i++;
	}
	printf("\n");
}
