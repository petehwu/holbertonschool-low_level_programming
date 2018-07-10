/**
 * _strpbrk - function that searches for any set of bytes
 * @s: string to search
 * @accept: substring to search
 * Return: pointer to first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, pos = -1;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
			if (s[j] == accept[i])
			{
				if (pos < 0)
					pos = j;
				else if (pos > j)
					pos = j;
			}
	}
	if (pos == -1)
		return ('\0');
	else
		return (s + pos);
}
