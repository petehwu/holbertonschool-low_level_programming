#include <stdlib.h>
/**
 * strtow - function to split string to words
 * @str: input string
 * Return: pointer to split string
 */
char **strtow(char *str)
{
	int numwords = 0, i = 0, wordlen = 0, z = 0, x = 0;
	char **rows, *cols;

	if (!str || !*str)
		return (NULL);
	while (*(str + i))
	{
		if (*(str + i) != ' ')
		{
			if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
				numwords += 1;
		}
		i++;
	}
	numwords += 1;
	rows = malloc(sizeof(char *) * numwords);
	if (!rows)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == ' ' && *str)
			str++;
		wordlen = 0;
		while (*(str + wordlen) != ' ' && *(str + wordlen))
			wordlen += 1;
		wordlen += 1;
		cols = malloc(sizeof(char) * wordlen);
		if (!cols)
			return (NULL);
		for (x = 0; x < (wordlen - 1);  x++)
		{
			*(cols + x) = *(str++);
		}
		*(cols + x) = '\0';
		*(rows + z) = cols;
		if (z < (numwords - 1))
			z++;
	}
	*(rows + z) = NULL;
	return (rows);
}
