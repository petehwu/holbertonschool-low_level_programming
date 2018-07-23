#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to initialize struct dog
 * @d: pointer to struct
 * @name: dog struct value1
 * @age: dog struct value2
 * @owner: dog struct value 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
