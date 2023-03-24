#include <stdlib.h>
/**
 * print_name - print the name
 * @name: name of the person
 * @f: function that print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
