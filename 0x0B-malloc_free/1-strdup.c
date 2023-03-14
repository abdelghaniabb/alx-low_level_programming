#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate of the string
 * @str: string
 * Return: new string
 */
char *_strdup(char *str)
{
	char *new_str = (char *) malloc((strlen(str) + 1) * sizeof(char));


	if (str == NULL || new_str == NULL || str == '\0')
	{
		return (NULL);
	}


	strcpy(new_str, str);
	return (new_str);
}
