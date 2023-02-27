#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 *
 * Return: Always 0.
 * @str: string
 */
void puts2(char *str)
{
int len = strlen(str);
int i = 0;
while (i < len)
{
printf("%c", str[i]);
i = i + 2;
}
printf("\n");
}
