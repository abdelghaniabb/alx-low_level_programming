#include <stdlib.h>
#include <string.h>
/**
 * str_concat - 2 string
 * @s1: the first string
 * @s2: the second string
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *result;
	int i;

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
	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	/* strcpy(result, s1);*/
	/* strcat(result, s2);*/
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + len2] = '\0';
	return (result);
}
