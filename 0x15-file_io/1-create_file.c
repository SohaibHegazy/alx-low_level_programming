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
	ssize_t size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (strlen(text_content))
		size = write(fd, text_content, strlen(text_content));

	if (size == strlen(text_content))
		return (1);
	else
		return (-1);

	close(fd);
}
