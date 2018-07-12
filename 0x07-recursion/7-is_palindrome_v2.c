#include <stdio.h>
/**
 * find_len - finds length of string
 * @s: input string
 * Return: length of string
 */
int find_len(char *s)
{
	int len = 0;

	if (*s)
	{
		len = find_len(s + 1);
		return (len+=1);
	}
	else
	{
		return (0);
	}
	
}
/** 
 * match_char - matches character to see if same
 * @s: string
 * @p1: position 1
 * @p2: position 2 
 * Return: 1 if same, else 0
 */
int match_char(char *s, int p1, int p2)
{
	int match = 1;

	if (p1 < p2 && match)
		match = match_char(s, ++p1 , --p2);
	if (s[p1] == s[p2] && match)
		return (1);
	else
		return (0);
		
}
/**
 * is_palindrome - check string to see if palindrome
 * @s: string to check
 * Return 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	int i;

	i = find_len(s);
	i--;
	return (match_char(s, 0, i));
	
}
