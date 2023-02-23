#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
int i;
char ch = 'a';

for (i = 0; i <= 10; i = i+1)
{
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
