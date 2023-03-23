#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: var
 * @n: number of numbers
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);
	while (i < n)
	{
		const char *p = va_arg(args, const char *);

		if (p == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", p);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
