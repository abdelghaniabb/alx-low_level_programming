#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
char chu = 'A';
while (chu <= 'Z')
{
putchar(chu);
chu++;
}
putchar('\n');
return (0);
}
