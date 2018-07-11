/**
 * do_calc - perform recursive multiply
 * @n: value to find sqrt for
 * @c: counter
 * Return: -1 or sqrt value
 */
int do_calc(int n, int c)
{
	int found = -1;

	if (c  < n / 2)
		found = do_calc(n, c + 1);
	if (c * c == n)
		return (c);
	else if (found >= 0)
		return (found);
	else
		return (-1);
}
/**
 * _sqrt_recursion - finds sqare root of number
 * @n: number to find square root for
 * Return: Square root of n or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (do_calc(n, 1));
}
