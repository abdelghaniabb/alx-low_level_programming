#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check code
 * @argv: An array containing the program command line arguments
 * @argc: size of argv
 * Return: void
 */

int main(int argc, char **argv)
{
	int sum = 0, i, j;
	char *arg;
	int num;


	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		j = 0;
		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(arg);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
