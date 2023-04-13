#include <stdio.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen (filename, "r");
	char buffer[letters];
	ssize_t n;

	if (filename == NULL)
		return (0);

	if (file == NULL)
		return (0);

	n = fread(buffer, sizeof(char), letters, file);
	fwrite(
	return (n);
}
