#include <stdio.h>
void startup (void) __attribute__ ((constructor));

/**
 * startup - function to be called before main
 */
void startup (void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
