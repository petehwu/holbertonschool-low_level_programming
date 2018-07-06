/**
 * _strncpy - copies one string to another
 * @dest: copy to string
 * @src: copy from string
 * @n: max number of bytes to copy
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
