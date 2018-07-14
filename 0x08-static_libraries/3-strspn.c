/**
 * _strspn - gets length of a prefix substring
 * @s: string to search
 * @accept: substring to search
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

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
	return (i);
}
