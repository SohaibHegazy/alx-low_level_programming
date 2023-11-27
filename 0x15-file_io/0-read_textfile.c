#include "main.h"

/**
 * read_textfile - function to read text file and print to stdout
 *
 * @filename: the file name
 * @letters: number of letters to be printed
 *
 * Return: number of letters actually printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024 * 8];
	ssize_t size;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	size = read(fd, &buffer[0], letters);
	size = write(STDOUT_FILENO, &buffer[0], size);
	close(fd);
	return (size);
}
