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
	struct dog *d2;

	d2 = malloc(sizeof(struct dog));
	if (!d2)
		exit(0);
	d2->name = name;
	d2->age = age;
	d2->owner = owner;
	*d = *d2;
}
