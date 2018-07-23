#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - instantiate a new dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *cname, *cowner;

	doggy = malloc(sizeof(dog_t));
	cname = malloc(sizeof(cname));
	cowner = malloc(sizeof(cowner));
	if (!doggy || !cname || !cowner)
		return (NULL);
	cname = name;
	cowner = owner;
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	return (doggy);
}
