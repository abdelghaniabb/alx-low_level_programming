#include <stdio.h>
#include <time.h>
/* more headers goes there */
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there*/
printf("Last digit of ");
printf("%d", n);
l = abs(n) % 10;
printf(" is %d ", l);
if (n > 5)
{
printf("and is greater than 5\n");
}
else
{
if (n == 0)
{
printf("and is 0\n");
}
else
{
if (n < 6 && n != 0)
{
printf("and is less than 6 and not 0\n");
}
}
}
return (0);
}
