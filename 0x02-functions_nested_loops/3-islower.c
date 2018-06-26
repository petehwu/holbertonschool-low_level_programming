#include "holberton.h"
/**
 * _islower - check if its lower case letter or not
 *  @c: Input character to check
 *
 *  Description: checks the input to see if its a lower case letter or not
 *  Return: 1 if lower case, 0 otherwise
 */

int _islower(int c)
{
	int lower;
	int upper;

	lower = 'a';
	upper = 'z';
	if (c >= lower  && c <= upper)
		return (1);
	else
		return (0);
}
