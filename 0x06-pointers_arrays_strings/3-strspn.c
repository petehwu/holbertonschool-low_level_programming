/**
 * _strspn - gets length of a prefix substring
 * @s: string to search
 * @accept: substring to search
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, sub, found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	sub = i;
	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; i <= sub; i++)
		{
			if (accept[j] == s[i])
				found++;
		}

	}
	if (found >= j)
		return (sub);
	else
		return (0);
}
