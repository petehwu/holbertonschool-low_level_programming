/**
 * rot13 - encode using rot13
 * @s: input string to endocde
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, x = 0;;

	while (*(s + i) != '\0')
	{
		while (key[x] != '\0')
		{
			if (*(s + i) == key[x])
			{
				*(s + i) = rot[x];
				break;
			}
			x++; 
		}
		x = 0;
		i++;
	}

	return (s);
}
