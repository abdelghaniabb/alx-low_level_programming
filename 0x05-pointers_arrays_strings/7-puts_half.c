#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 *
 * Return: Always 0.
 * @str: string
 */
void puts_half(char *str)
{
int len = strlen(str);
int n = len / 2;
while (n < len)
{
printf("%c", str[n]);
n++;
}
printf("\n");
}


