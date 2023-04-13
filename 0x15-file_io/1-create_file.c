#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - create file
 * @filename: file name
 * @text_content: the text to ad in the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fileD;
	ssize_t textLength;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fileD = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fileD == -1)
		return (-1);

	if (text_content != NULL)
	{
		textLength = strlen(text_content);
		bytesWritten = write(fileD, text_content, textLength);
		if (bytesWritten != textLength)
		{
			close(fileD);
			return (-1);
		}
	}

	close(fileD);
	return (1);
}
