/**
 * _memset - filles memory with constant byte
 * @s: Input pointer
 * @b: byte to use to fill memory
 * @n: number of bytes to fill
 * Return: pointer to buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
