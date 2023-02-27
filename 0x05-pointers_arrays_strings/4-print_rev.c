#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 *
 * Return: Always 0.
 * @s: string
 */
void print_rev(char *s)
{
int len = strlen(s);
int i = len - 1;

while (i >= 0)
{
printf("%c", s[i]);
i--;
}
printf("\n");
}
