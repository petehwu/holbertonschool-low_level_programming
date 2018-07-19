#include <stdlib.h>
/**
 * string_nconcat -  concatenates 2 strings
 * @s1: part1 of string to concat
 * @s2: part2 of string to concat
 * @n: number of bytes for 2 to add to 1
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, tot, s2len = 0, s1len = 0, index = 0;

	if (s1)
		while (*(s1 + s1len))
			s1len++;
	if (s2)
		while (*(s2 + s2len))
			s2len++;
	s2len++;
	s2len = (n < s2len) ? n : s2len;
	tot = s1len + n + 1;
	p = malloc(tot * sizeof(*p));
	if (!p)
		return (NULL);

	for (i = 0; i < s1len; i++)
	{
		*(p + index) = *(s1 + i);
		index++;
	}
	for (i = 0; i < s2len; i++)
	{
		*(p + index) = *(s2 + i);
		index++;
	}
	*(p + index) = '\0';
	return (p);
}
