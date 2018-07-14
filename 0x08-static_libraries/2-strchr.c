/**
 * _strchr - locates a character in string
 * @s: string to search
 * @c: character to look for
 * Return: pointer to first occurence or Null if not found
 */

char *_strchr(char *s, char c)
{
	if (c == 0)
	{
		while (*s != 0)
			s++;
		return (s);
	}
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	if (*s == '\0')
	{
		return ('\0');
	}
	else
		return (s);
}
