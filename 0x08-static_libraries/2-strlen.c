/**
 * _strlen - returns length of a string
 * @s: input string to count
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
