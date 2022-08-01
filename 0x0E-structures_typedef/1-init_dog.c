#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - funtion that initializes variable of type 'struct dog'
 * struct dog - struct containing pet dog details.
 *
 * @d: pointer to the struct type variable holding pet details
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

