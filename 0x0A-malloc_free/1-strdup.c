#include <stdlib.h>
/**
 * _strdup - copies a string and return pointer to copy
 * @str: string to copy
 * Return: pointer to newly created string
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j;

	if (!str)
		return (NULL);
	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		s[j] = str[j];
	return (s);
}
