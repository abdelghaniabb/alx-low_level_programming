
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, n1, n2, n3;

	n1 = 1;
	n2 = 2;
	i = 0;
	while (i < 50)
	{
		if (i != 49)
		{
		printf("%ld, ", n1);
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		i++;
		}
		else
		{
		printf("%ld", n1);
		}
	}
	return (0);
}

