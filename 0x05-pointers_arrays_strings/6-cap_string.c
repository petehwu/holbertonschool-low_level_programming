/**
 * check_separator - check if character is separator
 * @i: character to check
 * Return: 0 not separator, 1 is separator
 */
int check_separator(char i)
{
	if (i == ' ')
		return (1);
	if (i == '\t')
		return (1);
	if (i == '\n')
		return (1);
	if (i == ',')
		return (1);
	if (i == ';')
		return (1);
	if (i == '.')
		return (1);
	if (i == '!')
		return (1);
	if (i == '?')
		return (1);
	if (i == '"')
		return (1);
	if (i == '(')
		return (1);
	if (i == ')')
		return (1);
	if (i == '{')
		return (1);
	if (i == '}')
		return (1);
	return (0);
}
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to converted string
 */

char *cap_string(char *s)
{
	int x = 0;

	if (*s >= 'a' && *s <= 'z')
		*s = *s - 'a' + 'A';
	while (*(s + x) != '\0')
	{
		if (check_separator(*(s + x)))
		{
			if (*(s + x + 1) >= 'a' && *(s + x + 1) <= 'z')
			{
				*(s + x + 1) = *(s + x + 1) - 'a' + 'A';
				x++;
			}
		}
		x++;
	}
	return (s);
}
