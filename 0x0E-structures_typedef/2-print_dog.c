#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - funtion prints the details of 'struct dog'
 *
 * @d: pointer to the struct type variable holding pet detail
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);


/*	if (d != NULL) */
/*		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner); */

}

