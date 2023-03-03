#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - check the code
 * @dest: var1
 * @src: var2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int len1 = strlen(dest);
int len2 = strlen(src);
char ptr[len1 + len2];
while (i < len1)
{
ptr[i] = dest[i];
i++;
}
int j = i;
int i1 = 0;
while (i1 < len2)
{
ptr[j] = src[i1];
j++;
i1++;
}
printf("%s", ptr);
return (src);
}
