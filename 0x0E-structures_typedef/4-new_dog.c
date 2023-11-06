#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *ptr;

	if (!name || age < 0 || !owner)
		return (NULL);

	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return(NULL);
	}

	ptr->name = strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = strcpy(ptr->owner, owner);

	return (ptr);
}
