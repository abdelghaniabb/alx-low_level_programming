#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - add elements to an exixting file
 * @filename: the name of the file
 * @tect_content: the text to add
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileD;
	ssize_t textLength;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	return (1);

	fileD = open(filename, O_WRONLY | O_APPEND);
	if (fileD == -1)
		return (-1);

	textLength = strlen(text_content);
	bytesWritten = write(fileD, text_content, textLength);
	close(fileD);

	if (bytesWritten != textLength)
		return (-1);

	return (1);
}
