#include "main.h"
/**
 * _strcmp - copies a string
 * @s1: the destination string
 * @s2: the source string
 *
 * Return: pointer to the destination string
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (0);
i++;
}
return (s1[i] - s2[i]);
}
