#include "main.h"
/**
 * _strlen - check the code
 *
 * Return: Always 0.
 * @s: string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	s++;
	}

	return (len);
}
