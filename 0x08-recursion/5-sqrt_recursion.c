#include "main.h"
/**
 * _sqrt_recursion - check code
 * @n: integer
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_recursion_2(n, 1));
}
/**
 * _sqrt_recursion_2 - check code
 * @n: var1
 * @i: parametre
 * Return: 1 or 1
 */
int _sqrt_recursion_2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_2(n, i + 1));
}
