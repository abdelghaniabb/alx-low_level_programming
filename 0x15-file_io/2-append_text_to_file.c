#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int append_text_to_file(const char *filename, char *text_content) {
    if (filename == NULL)
        return -1; // Return -1 if filename is NULL

    if (text_content == NULL)
        return 1; // Return 1 if text_content is NULL (nothing to append)

    int fd = open(filename, O_WRONLY | O_APPEND); // Open the file in append mode
    if (fd == -1)
        return -1; // Return -1 if file could not be opened

    size_t text_len = strlen(text_content);
    ssize_t bytes_written = write(fd, text_content, text_len); // Write text_content to the end of the file
    close(fd); // Close the file descriptor

    if (bytes_written != text_len)
        return -1; // Return -1 if not all bytes were written successfully

    return 1; // Return 1 on success
}
