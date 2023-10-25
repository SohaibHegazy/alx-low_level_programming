#include "main.h"

/**
 * _sqrt_recursion - the function
 *
 * Description: gets sqrt of n
 * @n: input number
 *
 * Return: int
 */

int s(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (s(n, 1));
}

/**
 * s - the function
 *
 * Description: supporting function to find the sqrt
 * @n: input number
 * @i: trial value
 *
 * Return: int
 */

int s(int n, int i)
{
	if (i * i < n)
	{
		return (s(n, i + 1));
	}
	else if (i * i == n)
	{
		return (i);
	}
}
