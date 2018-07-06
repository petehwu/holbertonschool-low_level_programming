/**
 * *_strncat - concatenate two string
 * @dest:  2nd part of string
 * @src:  1st part of string
 * @n: Number of bytes to copy
 * Return: pointer to concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
