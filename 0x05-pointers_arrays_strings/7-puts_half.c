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
int n;
if (len % 2 == 0)
	n = len / 2;
else
	n = (len - 1) / 2 + 1;
while (n < len)
{
printf("%c", str[n]);
n++;
}
printf("\n");
}


