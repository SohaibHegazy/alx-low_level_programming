#include "main.h"

/**
 * _abs(int) - entry point
 *
 * Description: gets absolute value of int
 *
 * Return: always 0
 */

int _abs(int n)
{
	if(n < 0)
		n = (-1) * n;
	return (n);
}
