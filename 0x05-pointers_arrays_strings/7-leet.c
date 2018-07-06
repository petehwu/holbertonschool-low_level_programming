/**
 * leet - encode string to 1337
 * @s: input string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int i = 0, x = 0;
	char z[10] = "aeotlAEOTL";
	int r[10] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};

	while (*(s + i) != '\0')
	{
		while (z[x] != '\0')
		{
			if (*(s + i) == z[x])
			{
				*(s + i) = r[x] + '0';
				break;
			}
			x++;
		}
		i++;
		x = 0;
	}
	return (s);
}
