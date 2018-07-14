/**
 * _abs - return absolute value
 * @i: input integer value
 * Description: this function returns the absolute
 * value of the integer that is passed in
 * Return: the absolute value of the integer that is passed in
 */
int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
