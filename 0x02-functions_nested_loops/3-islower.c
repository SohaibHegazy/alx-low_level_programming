#include "main.h"

/**
 * _islower - entry point
 *
 * Description: checks if letter is lowercase
 * @c: character to be checked
 *
 * Return: 1 if lower and 0 if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
