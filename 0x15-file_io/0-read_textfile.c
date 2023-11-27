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
	FILE *fp = NULL;
	size_t i = 0;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	for (i = 0; i < letters; i++)
	{
		char c = fgetc(filename, fp);
		_putchar(c);
	}
	return (i + 1);
	fclose(fp);
}
