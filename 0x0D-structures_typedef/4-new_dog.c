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
	char __attribute__((unused)) *cname; 
	char __attribute__((unused)) *cowner;
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	cname = malloc(sizeof(char *));
	cowner = malloc(sizeof(char *));
	if (!doggy)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	cname = doggy->name;
	cowner = doggy->owner;
	return (doggy);
}
