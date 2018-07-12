/**
 * do_calc - perform recursive multiply
 * @n: value to find sqrt for
 * @c: counter
 * Return: -1 or sqrt value
 */
int do_calc(int n, int c)
{
	int found = 0;

	if (c * c <= n)
		found = do_calc(n, c + 1);
	if (found > c)
		return (found);
	else
		return (c);
}

/**
 * check_prime - tries to determine if number is prime
 * @n: number to check
 * @s: number to start checking from
 * Return: 0 if prime, number otherwise
 */
int check_prime(int n, int s)
{
	int val = 0;

	if (n % s != 0 && s > 2)
		val = check_prime(n, s - 1);
	if (val == 1 || n % s == 0)
		return (1);
	else
		return (0);
}

/**
 * is_prime_number - determines if number is prime
 * @n: integer number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int r, s;

	if (n <= 1)
		return (0);
	s = do_calc(n, 1);
	r = check_prime(n, s);
	if (r == 0)
		return (1);
	else
		return (0);
}
