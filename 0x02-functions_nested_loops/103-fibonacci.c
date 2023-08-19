#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1, j = 2, p = 2;

	while (i < 4000000)
	{
		if (i != 1)
		{
			p = i;
		}
		i = j + i;
		j = p;
	}
	printf("%i\n", i);
	return (0);
}
