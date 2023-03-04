#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - encrupt
 * @str: string
 * Return: code string
 */
char *rot13(char *str)
{
int i, j;
char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < strlen(chars); j++)
{
if (str[i] == chars[j])
{
str[i] = rot[j];
break;
}
}
}

return (str);
}
