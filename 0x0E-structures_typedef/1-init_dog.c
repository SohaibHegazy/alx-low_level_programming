#include <stdio.h>
#include "dog.h"

/**
 * init_dog - the function
 * 
 * Description: initialize the struct dog
 * @d: struct object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
