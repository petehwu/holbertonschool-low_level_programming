#include <stdlib.h>
/**
 * str_concat - concatenates 2 string
 * @s1: string1
 * @s2: string2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, i1 = 0, i2 = 0;
	char *ns;

	if (s1)
	{
		while (*(s1 + i1))
			i1++;
	}
	if (s2)
	{
		while (*(s2 + i2))
			i2++;
	}
	i2++;
	ns = malloc(sizeof(char) * (i1 + i2));
	if (!ns)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < i1; i++)
			ns[i] = s1[i];
		if (s2)
		{
			for (i = 0; i <= i2; i++)
				ns[i + i1] = s2[i];
		}
		else
		{
			ns[i] = 0;
		}
	}
	return (ns);
}
