#include <stdarg.h>
/**
 * sum_them_all - sum function
 * @n: nembre of element
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	int i = 0, s = 0;

	while (i < n)
	{
		s = s + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (s);
}
