#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: char name
 * @age: float age
 * @owner: char owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
