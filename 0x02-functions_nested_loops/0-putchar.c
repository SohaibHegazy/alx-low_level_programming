#include "main.h"

/**
 * main- Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n = 0;
	char a[8] = "_putchar";

	while (n < 8)
	{
		_putchar(a[n]);
		n++;
	}
	_putchar('\n');

	return (0);
}
