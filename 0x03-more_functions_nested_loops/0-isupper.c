/**
 * _isupper - check for upper case characters
 * @c: input character to check
 * Return: 1 if upper case, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


