#include <stdio.h>
/**
 * more_numbers - check code
 * Return: void
 */
void more_numbers(void)
{
	int i;
	char j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(j);
		}
		for (k = '0'; k <= '4'; k++)
		{
			putchar('1');
			putchar(k);
		}

		printf("\n");
	}
}
