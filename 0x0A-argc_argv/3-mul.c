#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argv: An array containing the program command line arguments
 * @argc: size of argv
 * Return: void
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
