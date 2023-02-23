#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
int i = 1;
char ch = 'a';

while (i < 11)
{
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
i++;
}
}
