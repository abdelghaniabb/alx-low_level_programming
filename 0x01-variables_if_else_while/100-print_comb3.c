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
while (i <= '8')
{
j = i + 1;
while (j <= '9')
{
putchar(i);
putchar(j);
if (i != '8' || j != '9')
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
