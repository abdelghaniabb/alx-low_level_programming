#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate of the string
 * @str: string
 * Return: new string
 */
char *_strdup(char *str)
{


	if (str == NULL)
	{
		return (NULL);
	}

	char *new_str =  (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}


	strcpy(new_str, str);
	return (new_str);
}
