#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - funtion that creates a new dog.
 *
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	unsigned int x;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (x = 0; x <= (strlen(name)); x++)

		d->name[x] = name[x];

	for (x = 0; x <= (strlen(owner)); x++)
		d->owner[x] = owner[x];

	d->name = d->name;
	d->age = age;
	d->owner = d->owner;

	return (d);

}

