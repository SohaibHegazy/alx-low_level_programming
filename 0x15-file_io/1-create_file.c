#include "main.h"

/**
 * create_file - function to create file
 *
 * @filename: name of the file
 * @text_content: contet of the file
 *
 * Return: 1 if success and -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = 0, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
		;
	size = write(fd, text_content, len);

	if (size == -1)
		return (-1);

	close(fd);

	return (size == len ? 1 : -1);
}
