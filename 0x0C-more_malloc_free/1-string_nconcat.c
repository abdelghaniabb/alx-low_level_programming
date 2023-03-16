#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - s1 + s2
 * @s1: first string
 * @s2: second string
 * @n: int
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *result = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	/*strcpy(result, s1);*/
	/*strncat(result, s2, n);*/
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < len1 + n)
	{
		result[i] = s2[i - len1];
		i++;
	}
	result[len1 + n] = '\0';
	return (result);
}
