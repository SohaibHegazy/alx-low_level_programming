#include "main.h"

/**
 * _isalpha - entry point
 *
 * Description: checks if character is alphabet
 * @c: character to be checked
 *
 * Return: 1 if letter and 0 if else
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
