#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - the function
 *
 * Description: free the memory allocation of dog
 * @d: dog structure
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
