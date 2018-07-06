/**
 * *_strcat - concatenates two strings
 *@dest: 2nd part of string
 *@src: 1st part of string
 *Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
