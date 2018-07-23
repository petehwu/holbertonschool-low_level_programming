#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints contents of struct dog
 * @d: pointer to struct to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		d->age ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
