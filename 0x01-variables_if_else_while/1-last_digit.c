#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print last digit
 *
 * Return: is 0 when success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("%i and is greater than 5\n", n);
	}
	else if ((n % 10) == 0)
	{
		printf("%i and is zero\n", n);
	}
	else if (0 < (n % 10) < 6)
	{
		printf("%i and is less than 6 and not 0\n", n);
	}

	return (0);
}
