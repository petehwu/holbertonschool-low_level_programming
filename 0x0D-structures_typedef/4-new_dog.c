#include "dog.h"
#include <stdlib.h>
/**
 * make_copy - copies a variable
 * @p: pointer to variable to be copied
 * Return: pointer to new copy 
 */
char *make_copy(char *p)
{
	int i;
	char *np;

	if (!p)
		return (NULL);
	while (*(p + i))
		i++;
	i++;
	np = malloc(i);
	i--;
	while (i >= 0)
	{
		*(np + i) = *(p + i);
		i--;
	}
	return (np);
}
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
	if (!name)
		cname = make_copy(name);
	if (!owner)
		cowner = make_copy(owner);
	return (doggy);
}
