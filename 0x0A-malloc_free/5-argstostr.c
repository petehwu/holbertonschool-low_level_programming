#include <stdlib.h>
/**
 * _strlen - returns length of string
 * @s: string to find length
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s)
		return (_strlen(s + 1) + 1);
	else
		return (0);
}
/**
 * tot_len - count total lengths of all args
 * @ac: num of arguments
 * @av: pointer to first arg
 * Return: total bytes
 */
int tot_len(int ac, char **av)
{
	int tot = 0;

	while (ac--)
	{
		tot += _strlen(*(av + ac)) + 1;
	}
	return (tot);
}
/**
 * argstostr - concatenates all arguments
 * @ac: number of parameters
 * @av: pointer to first parameter
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *ns, *temp;
	int i, len, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = tot_len(ac, av) + 1;
	ns = malloc(sizeof(char) * len);
	if (!ns)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		while (*temp)
		{
			*(ns + index) = *temp;
			index++;
			temp++;
		}
		*(ns + index) = '\n';
		index++;
	}
	*(ns + index) = '\0';
	return (ns);
}
