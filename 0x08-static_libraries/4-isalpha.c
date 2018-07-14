/**
 * _isalpha - check for letter c or C
 * @c: value that needs to be checked to see if it is alphnumeric
 * Description: function that takes one input
 * parameter and checks to see if it is alphanumeric
 * Return: return 1 if c or C 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
