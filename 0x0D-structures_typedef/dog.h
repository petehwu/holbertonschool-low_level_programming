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
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void _putchar(char c);
void free_dog(dog_t *d);
#endif
