#include "main.h"

/**
 * main - main function
 *
 * @ac: argument count
 * @av: argument value
 *
 * Return: exit 97 and "Usage: cp file_from file_to" if ac is not correct
 * and exit 98 with "Error: Can't read from file" if file_from not exist
 * and exit 99 with "Error: Can't write to NAME_OF_THE_FILE" if no file_to
 * and exit 100 with "Error: Can't close fd FD_VALUE" if not closed
 */

int main(int ac, char **av)
{
	int fromd = 0, tod = 0;
	char buffer[1024];
	ssize_t size = 0;

	if (ac != 3)
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to"), exit(97);

	fromd = open(av[1], O_RDONLY);
	if (fromd == -1)
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s", av[1]), exit(98);

	tod = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (tod == -1)
		dprintf(STDOUT_FILENO, "Error: Can't write to %s", av[2]), exit(99);

	while ((size = read(fromd, buffer, 1024)) > 0)
		if (write(tod, buffer, 1024) != size)
			dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]), exit(99);

	if (size == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]), exit(98);

	fromd = close(fromd);
	tod = close(tod);

	if (fromd)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fromd), exit(100);

	if (tod)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fromd), exit(100);

	return (1);
}
