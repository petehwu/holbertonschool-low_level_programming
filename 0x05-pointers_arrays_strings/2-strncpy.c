/**
 * _strncpy - copies one string to another
 * @dest: copy to string
 * @src: copy from string
 * @n: max number of bytes to copy
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) == *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i + 1) == '\0';
	return (dest);
}
