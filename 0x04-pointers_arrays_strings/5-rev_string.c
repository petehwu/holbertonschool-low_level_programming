/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0, x, offset;
	char t1;

	while (s[i] != '\0')
		i++;
	offset = i - 1;
	for (x = 0; x < i / 2; x++)
	{
		t1 = s[x];
		s[x] = s[offset - x];
		s[offset - x] = t1;
	}

}
