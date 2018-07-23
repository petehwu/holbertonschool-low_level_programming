#include "dog.h"
#include <stdlib.h>
/**
 * make_copy - make a copy of variable
 * @p: pointer to variable to be copied
 * Return: pointer to copied variable
 */
char *make_copy(char *p)
{
	int i = 0;
	char *np;

	if (!p)
		return (NULL);
	while (*(p + i))
		i++;
	i++;
	np = malloc(i);
	if (!np)
		return (NULL);
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
	cname = make_copy(name);
	cowner = make_copy(owner);
	if (!doggy)
		return (NULL);
	if (name)
		doggy->name = name;
	doggy->age = age;
	if (owner)
		doggy->owner = owner;
	return (doggy);
}
