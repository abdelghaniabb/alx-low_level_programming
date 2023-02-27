#include "main.h"

/**
 * swap_int - switch a and b
 *
 * Return: Always 0.
 * @a: adres of a
 * @b: adres of b
 */
void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
