#include "dog.h"

/**
 * new_dog - the function
 *
 * Description: add new dog data
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t or null if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (newdog == NULL)
		return (NULL);
	else
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
	return (new_dog);
}
