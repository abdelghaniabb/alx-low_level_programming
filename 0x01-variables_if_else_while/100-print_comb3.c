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
while (i <= '9')
{
j = '0';
while (j <= '9')
{
putchar(i);
putchar(j);
if (i != '9' || j != '9')
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
