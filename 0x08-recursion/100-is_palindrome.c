#include <string.h>
/**
 * help - comparer the begining of the string with its end
 * @s: the string
 * @first: counter to count from the begining of s
 * @lost: counter to count from the end of s
 * Return: int
 */
int help(char *s, int first, int lost)
{
	if (s[first] != s[lost])
		return (0);
	if (first >= lost)
		return (1);
	return (help(s, first + 1, lost - 1));
}
/**
 * is_palindrome - test if the string palindrome
 * @s: the string
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (help(s, 0, len - 1));
}
