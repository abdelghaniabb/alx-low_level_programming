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
j = ',';
while (i <= '9')
{
putchar(i);
putchar(j);
putchar(' ');
i++;
}
putchar('\n');
return (0);
}
