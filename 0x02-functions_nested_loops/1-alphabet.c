#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
