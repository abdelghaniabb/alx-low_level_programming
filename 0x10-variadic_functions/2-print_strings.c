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
		if (va_arg(args, char*) == NULL)
		{
			printf("(nil)");
			return;
		}
		i++;
	}
	va_end(args);

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%s", va_arg(args, char*));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
