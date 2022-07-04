#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: first member
 * @name: Dog's first member
 * @age: Dog's second member
 * @owner: Dog's third member
 *
 * Description: Longer description
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
