#include "main.h"

/**
 * _isdigit - entry point
 *
 * Description: checks if character is digit
 * @c: character to be checked
 *
 * Return: 1 if digit and 0 if else
 */

int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
