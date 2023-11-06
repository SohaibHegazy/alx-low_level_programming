#include <stdio.h>
#include "dog.h"

/**
 * print_dog - thr function
 *
 * Description: prints elements of structure dog
 * @d: object of structure dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age ? d->age : "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
