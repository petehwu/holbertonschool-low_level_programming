/**
 * factorial - calculates factorial
 * @n: factorial to calculate
 * Return: factorial value
 */

int factorial(int n)
{
	int tot = 1, val = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		if (n > 1)
			val =  factorial(n - 1);
		tot = n * val;
		return (tot);
	}

}
