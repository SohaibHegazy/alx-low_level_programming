#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - entry point
 * Description: program to print if number is positive or negative
 *
 * Return is 0 when success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        
	if (n < 0)
        {
                printf("%i is negative\n", n);
        }
        else if (n ==0)
        {
                printf("%i is zero\n", n);
        }
        else if (n > 0)
        {
                printf("%i is positive\n", n);
        }
        fi

	return (0);
}
