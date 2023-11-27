#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 *
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 if success and -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = 0, len = strlen(text_content);

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	size = write(fd, text_content, len);
	if (size == -1)
		return (-1);

	close(fd);
	return (1);
}
