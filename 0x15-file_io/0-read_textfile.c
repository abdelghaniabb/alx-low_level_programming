#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read file
 * @filename: name of the file to open
 * @letters: number of letters to print
 * Return: numberof letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fileDescriptor);
		return (0);
	}

	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead <= 0)
	{
		close(fileDescriptor);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead)
	{
		close(fileDescriptor);
		free(buffer);
		return (0);
	}

	close(fileDescriptor);
	free(buffer);
	return (bytesRead);
}
