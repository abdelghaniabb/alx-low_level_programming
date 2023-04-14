#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 1024

void print_error_and_exit(int error_code, const char *error_message);
void close_file_and_exit(int error_code, int fd);
/**
 * main - check code
 * @argc: number of arg
 * @argv: list of arg
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, strerror(errno));

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		close_file_and_exit(99, fd_from);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			close_file_and_exit(99, fd_from);
	}

	if (bytes_read == -1)
		close_file_and_exit(98, fd_from);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

/**
 * print_error_and_exit - print error
 * @error_code: error
 * @error_message: error
 * Return: void
 */
void print_error_and_exit(int error_code, const char *error_message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", error_message);
	exit(error_code);
}

/**
 * close_file_and_exit - close file
 * @error_code: error
 * @fd: file discriptor
 * Return: void
 */
void close_file_and_exit(int error_code, int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error_code);
	}
}
