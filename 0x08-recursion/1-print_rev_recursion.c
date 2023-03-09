#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - check code
 * @s: var
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
  if (*s == '\0') /* base case */
  {
    return;
  }
  _print_rev_recursion(s + 1); /* recursive call */
  putchar(*s);
}
