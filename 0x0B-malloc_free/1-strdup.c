#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate of the string
 * @str: string
 * Return: new string
 */
char *_strdup(char *str)
{
	int size;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str) + 1;
	new_str = (char *) malloc(size * sizeof(char));


	if (new_str == NULL)
	{
		return (NULL);
	}


	strcpy(new_str, str);
	return (new_str);
}
