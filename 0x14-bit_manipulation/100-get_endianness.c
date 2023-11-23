#include "main.h"

/**
 * get_endianness - function to get value of endianness
 *
 * Return: 0 if big and 1 if little
 */

int get_endianness(void)
{
	int n = 1;

	return (*(char *)&n);
}
