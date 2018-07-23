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

	while (*(p + i))
		i++;
	i++;
	np = malloc(i);
	if (!np)
		return (NULL);
	i--;
	while (i >=0)
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
	dog_t *doggy;
	char *cname, *cowner;

	doggy = malloc(sizeof(dog_t));
	cname = make_copy(name);
	cowner = make_copy(owner);;
	if (!doggy || !cname || !cowner)
		return (NULL);
	cname = name;
	cowner = owner;
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	return (doggy);
}
