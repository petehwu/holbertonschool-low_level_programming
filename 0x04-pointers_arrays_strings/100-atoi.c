/**
 * _atoi - convert string to integer
 * @s: input string to convert
 * Return: converted integer
 */

int _atoi(char *s)
{
	int multiplier = 1, thenum = 0, digits = 0;
	int numstart = -1, numend = -1, exit_loop = 0,  x, i = 0, neg = 0, z;

	while (s[i] != '\0' && exit_loop == 0)
	{
		if (s[i] == '-' && digits == 0)
			neg++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (digits == 0)
				numstart = i;
			digits++;
		}
		else if (digits > 0)
		{
			numend = i - 1;
			exit_loop = 1;
		}
		else
		{
		}
		i++;
	}
	if (numstart >= 0 && numend == -1)
		numend = i - 1;
	else
		return (0);
	for (x = numstart; x <= numend; x++)
	{
		for (z = 1; z < digits; z++)
			multiplier *= 10;
		if (neg % 2 > 0)
			thenum = ((s[x] - '0') * multiplier * -1) + thenum;
		else
			thenum = ((s[x] - '0') * multiplier) + thenum;
		digits--;
		multiplier = 1;
	}
	return (thenum);
}
