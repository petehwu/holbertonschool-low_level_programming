/**
 * str_len - returns length of string
 * @s: string to count
 * Return: length of string
 */
int str_len(char *s)
{
	int len = 0;

	if (*s)
		len = 1 + str_len(s + 1);
	return (len);
}
/**
 * add_char - add chars
 * @s: pointer to string
 * @sw: switch position
 * Return: sum of the string
 */
int add_char(char *s, int sw)
{
	int len = 0, tot = 0;

	len = str_len(s);
	if (*s)
		tot = add_char(s + 1, sw);
	if (len - sw > 0)
		tot -= *s;
	if (len - sw  <= 0)
		tot += *s;
	return (tot);
}

/**
 * is_palindrome - determines if palindrome
 * @s: string to check
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	int len = 0, sw, final;

	len = str_len(s);
	sw = len / 2;
	final = add_char(s, sw);
	if (len % 2 != 0)
		final += s[len / 2];
	if (final > 0)
		return (0);
	else
		return (1);
}
