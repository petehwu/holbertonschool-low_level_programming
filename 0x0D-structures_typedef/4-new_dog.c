#include "dog.h"
#include <stdlib.h>
/**
 * make_copy - copies a variable
 * @p: pointer to variable to be copied
 * Return: pointer to new copy
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
	char *cname, *cowner;
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (!doggy || !owner || !name)
		return (NULL);
	cname = make_copy(name);
	cowner = make_copy(owner);
	doggy->name = cname;
	doggy->age = age;
	doggy->owner = cowner;
	return (doggy);
}
