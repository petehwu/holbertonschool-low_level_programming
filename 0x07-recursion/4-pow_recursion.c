/**
 * _pow_recursion - raise value to power
 * @x: value to raise
 * @y: power
 * Return: value raised to power
 */
int _pow_recursion(int x, int y)
{
	int tot;

	if (y > 0)
	{
		tot = _pow_recursion(x, y - 1);
		tot *= x;
	}
	else if (y == 0)
		tot = 1;
	else
		tot = -1;
	return (tot);
}
