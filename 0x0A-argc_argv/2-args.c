#include <stdio.h>

/**
 * main - check code
 * @argv: An array containing the program command line arguments
 * @argc: size of argv
 * Return: void
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
