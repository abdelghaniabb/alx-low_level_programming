#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i;

    /* Capitalize the first letter */
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 'a' - 'A';
	}
    /* Capitalize letters after separators */
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' &&
(s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}'))
		{
			s[i] -= 'a' - 'A';
		}
	}

	return (s);
}
