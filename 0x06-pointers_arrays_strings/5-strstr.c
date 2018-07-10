/**
 * _strstr - find a substring in a string
 * @haystack: string to search
 * @needle: substring to look for in search
 * Return: pointer to start of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, found = -1;
	char firstchar;

	firstchar = needle[0];
	for (i = 0; haystack[i] != 0; i++)
	{
		if (haystack[i] == firstchar)
		{
			for (j = 0; needle[j] != 0; j++, i++)
			{
				if (needle[j] != haystack[i])
					break;
			}
			if (needle[j] == '\0')
			{
				found = 1;
				i = i - j;
				break;
			}
		}
	}
	if (found == 1)
		return (haystack + i);
	else
		return ('\0');
}
