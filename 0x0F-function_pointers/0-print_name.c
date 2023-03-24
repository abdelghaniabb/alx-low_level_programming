/**
 * print_name - print the name
 * @name: name of the person
 * @f: function that print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
