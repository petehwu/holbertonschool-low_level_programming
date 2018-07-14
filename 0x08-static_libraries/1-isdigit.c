/**
 * _isdigit - check if input is between 0 and 9
 * @c: input to check if integer
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
