#include "main.h"

/**
 * factorial - the function
 *
 * Description: calculates factorial of an integer
 * @n: integer to be calculated
 *
 * Return: inetegr
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
