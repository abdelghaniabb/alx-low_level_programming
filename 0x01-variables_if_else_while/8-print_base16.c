#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long i;
long j;
i = '0';
j = 'a';
while (i <= '9')
{
putchar(i);
i++;
}
while (j <= 'f')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
