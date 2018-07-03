/**
 * *_strcpy - copys pointers
 * @dest: target pointer
 * @src: source pointer
 * Return: character pointer
 */

char *_strcpy(char *dest, char *src)
{	
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i+1] = '\n';
	return (dest);
}
