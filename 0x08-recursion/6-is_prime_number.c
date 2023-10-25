#include "main.h"

/**
 * is_prime_number - the function
 * p - supporting function
 *
 * Description: find if n is a prime number
 * @n: input integer
 * @n2: supporting number
 *
 * Return: int
 */

int p(int n, int n2);
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (p(n, 2));
	}
}
int p(int n, int n2)
{
	if (n2 == n)
	{
		return (1);
	}
	else
	{
		if (n % n2 == 0)
		{
			return (0);
		}
		else
		{
			return (p(n, n2 + 1));
		}
	}
}
