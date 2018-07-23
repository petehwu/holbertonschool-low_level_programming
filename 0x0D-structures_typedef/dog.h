#ifndef __DOG_H
#define __DOG_H
/**
 * struct dog - is a dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to name of owner
 *
 * Description: struct for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
#ifndef __INIT_DOG
#define __INIT_DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
