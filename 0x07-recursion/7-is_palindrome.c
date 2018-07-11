#include <stdio.h>
/**
 * str_len - returns length of string
 * @s: string to count
 * Return: length of string
 */
int str_len(char *s)
{
	int len = 0;

	if (*s)
		len = 1 + str_len(s+1);
	return (len);
}

/**
 * is_palindrome - determines if palindrome
 * @s: string to check
 */
int is_palindrome(char *s)
{
	int len = 0, tot = 0;

	len = str_len(s);
	printf("len: %i \n", len);
	if (*s)
		tot = is_palindrome(s+1);
	if (len / 2 >= 2)
		tot -= *s;
	if (len / 2 < 2)
		tot += *s;
	printf("tot: %i ", tot);
	return (tot);
			
}
